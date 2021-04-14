/* (c) 2021 by Stephan Menzel
 * Licensed under the Apache License, Version 2.0.
 * See attached file LICENSE for full details
 */
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

bool GooglePubsubImpl::subscribe(const FString &n_topic, FSubscription &n_subscription, const FPubsubMessageReceived n_handler) {

	// First we need to create a subscription for ourselves. 
	// This will enable us to receive messages.
	// I just make this up as I go along trying to understand pubsub 
	// and how it could best match to SQS behavior.

	// So instead of relying on the user to create a subscription for us, I do it

	// First we need a name for our subscription. Let's try this...
	const FString instance_id = get_google_cloud_instance_id();
	n_subscription.Topic = n_topic;
	n_subscription.Id = FString::Printf(TEXT("CloudConnector-%s-%s"), *instance_id, *n_subscription.Topic);

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
	message.m_message_id = UTF8_TO_TCHAR(n_message.message_id().c_str());
	message.m_body = UTF8_TO_TCHAR(n_message.data().c_str());

	const std::chrono::system_clock::time_point now{ std::chrono::system_clock::now() };
	message.m_message_age = std::chrono::duration_cast<std::chrono::milliseconds>(now - n_message.publish_time()).count();

	UE_LOG(LogCloudConnector, Display, TEXT("Received message (%s): %s"),
			*message.m_message_id, *message.m_body);

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
		UE_LOG(LogCloudConnector, Verbose, TEXT("Acknowledged message '%s', handler returned true"), *message.m_message_id);
	} else {
		std::move(n_ack_handler).nack();
		UE_LOG(LogCloudConnector, Display, TEXT("Not acknowledging message '%s', handler returned false"), *message.m_message_id);
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
