/* (c) 2021 by Stephan Menzel
 * Licensed under the Apache License, Version 2.0.
 * See attached file LICENSE for full details
 */
#pragma once

// I have not found a way to exclude those files from the build if Google Cloud is 
// not required. So I fake it blind this sway
#ifdef WITH_GOOGLECLOUD_SDK

#include "CoreMinimal.h"
#include "ICloudQueue.h"
#include "Templates/Tuple.h"
#include "HAL/Thread.h"

#pragma warning(push)
#pragma warning(disable:4583)
#pragma warning(disable:4582)

 // Google Cloud SDK
#include "Windows/PreWindowsApi.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/pubsub/subscription.h"
#include "google/cloud/pubsub/subscriber.h"
#include "Windows/PostWindowsApi.h"

#pragma warning(pop)


/** ICloudQueue implementation intended to use using Google Cloud Tasks 
	to implement queuing. Due to lack of SDK support this is now using Pubsub instead,
	treating a Pubsub Topic as a Q. Which means unlike the AWS impl it does not have a
	receive-exactly-once guarantee.
 */
class GoogleQueueImpl : public ICloudQueue {

	public:
		GoogleQueueImpl(const class ACloudConnector *n_config);
		virtual ~GoogleQueueImpl() noexcept;

		void shutdown() noexcept override;

		// see ICloudQueue docs for these
		bool listen(const FString &n_queue, FQueueSubscription &n_subscription, const FQueueMessageReceived n_handler) override;
		bool stop_listen(FQueueSubscription &&n_subscription) override;
	
	private:

		void receive_message(google::cloud::pubsub::Message const &n_message,
				const FQueueMessageReceived &n_handler, google::cloud::pubsub::AckHandler &&n_ack_handler);

		// internal information to maintain a subscription
		// including a future to shut it down.
		using GoogleSubscriptionTuple = TTuple<
			google::cloud::pubsub::Subscription,
			TUniquePtr<google::cloud::pubsub::Subscriber>,
			google::cloud::future<google::cloud::Status>
		>;

		// A map to store them with my FSubscription info as key
		using GoogleSubscriptionMap = TMap<FQueueSubscription, GoogleSubscriptionTuple>;

		const FString                  m_project_id;
		const uint32                   m_visibility_timeout;
		const bool                     m_handle_in_game_thread;
		GoogleSubscriptionMap          m_subscriptions;
		static FCriticalSection        s_subscriptions_mutex;

		/* The Pubsub SDK normally spawns and maintains its own background threads.
		 * However, tests have shown that I cannot seem to interact with the engine
		 * from within them. Not even things like logging. I am assuming that only
		 * "engine" threads can do this, even though I have evidence to the contrary.
		 * Something just seems different about those threads. In any case, maintaining
		 * my own completion Q and runner solved the issue.
		 */
		google::cloud::CompletionQueue m_completion_q;
		TUniquePtr<FThread>            m_runner;   //!< background thread for the SDK

};

// I have not found a way to exclude those files from the build if Google Cloud is 
// not required. So I fake it blind this sway
#else // WITH_GOOGLECLOUD_SDK
#include "CoreMinimal.h"
#include "BlindQueueImpl.h"
using GoogleQueueImpl = BlindQueueImpl;
#endif // WITH_GOOGLECLOUD_SDK
