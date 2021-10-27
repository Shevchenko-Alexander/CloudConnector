/* (c) 2021 by Stephan Menzel
 * Licensed under the Apache License, Version 2.0.
 * See attached file LICENSE for full details
 */

#ifdef WITH_GOOGLECLOUD_SDK

#include "GooglePubsubImpl.h"
#include "ICloudConnector.h"
#include "Utilities.h"

#include "Async/Async.h"
#include "Internationalization/Regex.h"

 // GoogleCloud SDK uses a few Cpp features that cause problems in Unreal Context.
 // See here: https://github.com/akrzemi1/Optional/issues/57 for an explanation

#pragma warning(push)
#pragma warning(disable:4583)
#pragma warning(disable:4582)

 // Google Cloud SDK
#include "Windows/PreWindowsApi.h"
#include "google/cloud/pubsub/subscriber.h"
#include "google/cloud/pubsub/publisher.h"
#include "google/cloud/pubsub/subscription_admin_client.h"
#include "Windows/PostWindowsApi.h"

#pragma warning(pop)

#include <future>

namespace gc = google::cloud;
namespace pubsub = google::cloud::pubsub;

FCriticalSection GooglePubsubImpl::s_subscriptions_mutex;

GooglePubsubImpl::GooglePubsubImpl(const FString &n_project_id, const bool n_handle_in_game_thread)
		: m_project_id{ n_project_id }
		, m_handle_in_game_thread{ n_handle_in_game_thread } {

	m_runner.Reset(new FThread(TEXT("Google Pubsub Runner"),
		[this] {
			this->m_completion_q.Run();
		}
	));
}

GooglePubsubImpl::~GooglePubsubImpl() noexcept {

	try {
		// user may have not unsubscribed
		TArray<FSubscription> remaining_subs;

		{
			FScopeLock slock(&s_subscriptions_mutex);
			remaining_subs.Reserve(m_subscriptions.Num());
			for (const TPair<FSubscription, GoogleSubscriptionTuple> &i : m_subscriptions) {
				remaining_subs.Add(i.Key);
			}
		}

		for (FSubscription &s : remaining_subs) {
			unsubscribe(MoveTemp(s));
		}
	
		m_completion_q.Shutdown();

		m_runner->Join();
		m_runner.Reset();

	} catch (const std::exception &sex) {
		UE_LOG(LogCloudConnector, Error, TEXT("Unexpected exception tearing down pubsub: %s"), UTF8_TO_TCHAR(sex.what()));
	}
}

void GooglePubsubImpl::shutdown() noexcept {

	UE_LOG(LogCloudConnector, Warning, TEXT("Google Pubsub shutdown not implemented yet"));
}

bool GooglePubsubImpl::subscribe(const FString &n_topic, FSubscription &n_subscription, const FPubsubMessageReceived n_handler) {

	// First we need to create a subscription for ourselves. 
	// This will enable us to receive messages.
	// I just make this up as I go along trying to understand pubsub 
	// and how it could best match to SQS behavior.

	// So instead of relying on the user to create a subscription for us, I do it

	// First we need a name for our subscription. Let's try this...
	const std::string instance_id = get_google_cloud_instance_id();
	n_subscription.Topic = n_topic;
	n_subscription.Id = FString::Printf(TEXT("CloudConnector-%s-%s"), UTF8_TO_TCHAR(instance_id.c_str()), *n_subscription.Topic);

	{
		FScopeLock slock(&s_subscriptions_mutex);
		if (m_subscriptions.Contains(n_subscription)) {
			UE_LOG(LogCloudConnector, Error, TEXT("Already subscribed to '%s'"), *n_topic);
			return false;
		}
	}

	// So, let's see if we can create a subscription for us
	pubsub::SubscriptionAdminClient subscription_admin_client(pubsub::MakeSubscriptionAdminConnection());

	const pubsub::Topic topic(TCHAR_TO_UTF8(*m_project_id), TCHAR_TO_UTF8(*n_subscription.Topic));
	pubsub::Subscription sub(TCHAR_TO_UTF8(*m_project_id), TCHAR_TO_UTF8(*n_subscription.Id));

	// Subscription parameters
	pubsub::SubscriptionBuilder options;
	options.set_ack_deadline(std::chrono::seconds(ICloudPubsub::VisibilityTimeout));
	options.set_retain_acked_messages(false);

	// Create it. This can take a while.
	gc::StatusOr<google::pubsub::v1::Subscription> subscription = subscription_admin_client.CreateSubscription(topic, sub, options);
	
	if (subscription.status().code() == google::cloud::StatusCode::kAlreadyExists) {
		UE_LOG(LogCloudConnector, Warning, TEXT("Subscription '%s' already exists"), *n_subscription.Id);
	} else {
		if (!subscription) {
			UE_LOG(LogCloudConnector, Error, TEXT("Could not create Subscription '%s' to topic '%s': %s"),
				*n_subscription.Id, *n_subscription.Topic, UTF8_TO_TCHAR(subscription.status().message().c_str()));
			return false;
		}
	}

	UE_LOG(LogCloudConnector, Display, TEXT("Successfully created subscription '%s'"), *n_subscription.Id);

	// Now we should have a subscription for us. Next step is to hook up to it.
	pubsub::SubscriberOptions subscriber_options;
	subscriber_options.set_max_concurrency(2);

	pubsub::ConnectionOptions connection_options;
	connection_options.DisableBackgroundThreads(m_completion_q);
	//connection_options.set_background_thread_pool_size(1);  // This is when using the internal thread pool, not ours.

	// create a "Subscriber", which is basically a runner for one subscription 
	// with no thread pool as we run the thread ourselves. I don't know yet if it is
	// a problem to potentially have multiple subscribers working on this one completion Q
	TUniquePtr<pubsub::Subscriber> subscriber = MakeUnique<pubsub::Subscriber>(pubsub::MakeSubscriberConnection(
		sub,
		subscriber_options,
		connection_options));

	// remember our subscription in a map
	GoogleSubscriptionTuple *new_entry = nullptr;
	{
		FScopeLock slock(&s_subscriptions_mutex);
		m_subscriptions.Emplace(n_subscription, GoogleSubscriptionTuple{
					MoveTemp(sub),
					MoveTemp(subscriber),
					gc::future<gc::Status>{}
			}
		);
		new_entry = m_subscriptions.Find(n_subscription);
	}

	checkf(new_entry, TEXT("Internal data failure when inserting new subscription"));

	// Yes, we have race here in case multiple subscribers do this at 
	// once and cause rebalancing of the map but I take the liberty of ignoring this for now.

	pubsub::Subscriber &s = *new_entry->Get< TUniquePtr<pubsub::Subscriber> >().Get();

	// Hook up our handler function
	new_entry->Get< gc::future<gc::Status> >() = s.Subscribe(
		[this, n_handler](pubsub::Message const &n_message, pubsub::AckHandler n_ack_handler) {

			// call message processing function which will do the rest
			this->receive_message(n_message, n_handler, std::move(n_ack_handler));
		});

	UE_LOG(LogCloudConnector, Display, TEXT("Now subscribed to '%s', receiving messages"), *n_subscription.Id);

	return true;
}

void GooglePubsubImpl::receive_message(pubsub::Message const &n_message, const FPubsubMessageReceived &n_handler, pubsub::AckHandler &&n_ack_handler) {

	// We have received a message. We are in the worker thread here.
	FPubsubMessage message;
	message.m_google_pubsub_message_id = UTF8_TO_TCHAR(n_message.message_id().c_str());
	message.m_body = UTF8_TO_TCHAR(n_message.data().c_str());

	const std::chrono::system_clock::time_point now{ std::chrono::system_clock::now() };
	message.m_message_age = std::chrono::duration_cast<std::chrono::milliseconds>(now - n_message.publish_time()).count();

	UE_LOG(LogCloudConnector, Display, TEXT("Received message (%s)"), *message.m_google_pubsub_message_id);

	// Now I create the return Promise. It will be fulfilled by the delegate implementation
	const PubsubReturnPromisePtr rp = MakeShared<PubsubReturnPromise, ESPMode::ThreadSafe>();
	TFuture<bool> return_future = rp->GetFuture();

	// Call the delegate on the game thread or right here, depending on what the user desires
	if (m_handle_in_game_thread) {
		Async(EAsyncExecution::TaskGraphMainThread, [message, n_handler, rp] {
			n_handler.ExecuteIfBound(message, rp);
		});
	} else {
		n_handler.ExecuteIfBound(message, rp);
	}

	// Wait for the delegate impl to satisfy the promise.
	// This might take forever if the implementation is not careful.
	// Maybe agree on a timeout?
	return_future.Wait();
	if (return_future.Get()) {
		// Test have shown that acknowledging is message has similar semantics as
		// deleting one in SQS. I couldn't find any means to delete a message otherwise
		// so that seems to be all I can do for now.
		std::move(n_ack_handler).ack();
		UE_LOG(LogCloudConnector, Verbose, TEXT("Acknowledged message '%s', handler returned true"), *message.m_google_pubsub_message_id);
	} else {
		std::move(n_ack_handler).nack();
		UE_LOG(LogCloudConnector, Display, TEXT("Not acknowledging message '%s', handler returned false"), *message.m_google_pubsub_message_id);
	}
}

bool GooglePubsubImpl::unsubscribe(FSubscription &&n_subscription) {

	// Locate the subscriber
	GoogleSubscriptionTuple *s = nullptr;
	{
		FScopeLock slock(&s_subscriptions_mutex);
		s = m_subscriptions.Find(n_subscription);
		if (!s) {
			UE_LOG(LogCloudConnector, Error, TEXT("Cannot unsubscribe from '%s', internal data missing"), *n_subscription.Id);
			return false;
		}
	}

	// Stop the subscriber. cancel() on the future is said to halt message retrieval
	s->Get< gc::future<gc::Status> >().cancel();

	// Do I have to wait? In Tests this returned right away but still I feel it's safer.
	const std::future_status status = s->Get< gc::future<gc::Status> >().wait_for(std::chrono::seconds(4));
	
	// Delete internal structs and subscriber
	{
		FScopeLock slock(&s_subscriptions_mutex);
		m_subscriptions.Remove(n_subscription);
	}

	// Now delete the subscription we created for us
	pubsub::SubscriptionAdminClient subscription_admin_client(pubsub::MakeSubscriptionAdminConnection());

	const pubsub::Subscription sub(TCHAR_TO_UTF8(*m_project_id), TCHAR_TO_UTF8(*n_subscription.Id));
	const gc::Status stat = subscription_admin_client.DeleteSubscription(sub);

	if (!stat.ok()) {
		UE_LOG(LogCloudConnector, Warning, TEXT("Failed to delete subscription '%s': %s"), 
				*n_subscription.Id, UTF8_TO_TCHAR(stat.message().c_str()));
	} else {
		UE_LOG(LogCloudConnector, Display, TEXT("Deleted subscription '%s'"), *n_subscription.Id);
	}

	return true;
};

bool GooglePubsubImpl::publish(const FString &n_topic, const FString &n_message, FPubsubMessagePublished &&n_handler) {

	checkf(IsInGameThread(), TEXT("Please call GooglePubsubImpl::publish() in the game thread"));
	if (n_topic.IsEmpty()) {
		UE_LOG(LogCloudConnector, Warning, TEXT("Cannot publish to an empty topic"));
		return false;
	}
	if (n_message.IsEmpty()) {
		UE_LOG(LogCloudConnector, Warning, TEXT("Will not publish empty empty message to topic '%'"), *n_topic);
		return false;
	}

	// sadly, GCP SDK seems to throw but doesn't exactly tell when and what. I have to use this
	// blunt try-catch block to be at least safe against throwing out of here

	try {
		// We store publishers for each topic in a map and create a new one on demand
		const PublisherPtr publisher = [this, &n_topic] {

			if (PublisherPtr * const existing = m_publishers.Find(n_topic)) {
				return *existing;
			} else {
				pubsub::PublisherOptions publisher_options;
				// Look at these options! Do we want any of them?

				// I am assuming this object can use the same completion Q as the subscribers
				// Since it runs only one thread, this would give us the guarantee that
				// publish and subscriber cannot overlap.
				pubsub::ConnectionOptions connection_options;
				connection_options.DisableBackgroundThreads(m_completion_q);

				// Can this return null? Browsed the code a little and it looks like it's not supposed to.
				return m_publishers.Emplace(n_topic, MakeShared<pubsub::Publisher, ESPMode::ThreadSafe>(
						pubsub::MakePublisherConnection(
							pubsub::Topic{ TCHAR_TO_UTF8(*m_project_id), TCHAR_TO_UTF8(*n_topic) },
							publisher_options,
							connection_options
						)));
			}
		}();

		
		// It returns a future that will become true once the message has been sent
		// I won't wait for this in here though but only in a thread and only if required.
		// If the user didn't post a handler though, this means I have no idea if the message 
		// will actually be posted
		if (!n_handler.IsBound()) {
			
			publisher->Publish(pubsub::MessageBuilder{}.SetData(TCHAR_TO_UTF8(*n_message)).Build());

			UE_LOG(LogCloudConnector, Display, TEXT("Started publish of message to topic '%s', no finish handler"), *n_topic);
		} else {
			Async(EAsyncExecution::ThreadPool, [publisher, n_message, n_handler, game_thread{ this->m_handle_in_game_thread }]{

				// Now that we have a publisher (or went to catch), send our message
				gc::future< gc::StatusOr<std::string> > future_id =
						publisher->Publish(pubsub::MessageBuilder{}.SetData(TCHAR_TO_UTF8(*n_message)).Build());

				// Wait for the message to be sent
				future_id.wait_for(std::chrono::seconds(MessageSendTimeout));

				const bool success = future_id.is_ready() && future_id.get().ok();
				FString msg;
				if (future_id.is_ready()) {
					if (future_id.get().ok()) {
						msg = UTF8_TO_TCHAR(future_id.get().value().c_str());
					} else {
						msg = UTF8_TO_TCHAR(future_id.get().status().message().c_str());
					}
				} else {
					msg = TEXT("timeout sending message");
				}

				if (game_thread) {
					// I really shouldn't be abandoning async tasks like that...
					Async(EAsyncExecution::TaskGraphMainThread, [success, msg, n_handler] { n_handler.Execute(success, msg); });
				} else {
					n_handler.Execute(success, msg);
				}
			});
		}

		return true;

	} catch (const std::exception &e) {
		UE_LOG(LogCloudConnector, Warning, 
				TEXT("Caught unknown exception trying to publish message to Google Pubsub: %"), UTF8_TO_TCHAR(e.what()));
	}

	return false;
}

#endif // WITH_GOOGLECLOUD_SDK
