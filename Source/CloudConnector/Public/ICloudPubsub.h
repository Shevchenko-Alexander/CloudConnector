/* (c) 2021 by Stephan Menzel
 * Licensed under the Apache License, Version 2.0.
 * See attached file LICENSE for full details
 */
#pragma once

#include "CoreMinimal.h"

#include "Templates/UniquePtr.h"
#include "Templates/SharedPointer.h"
#include "Async/Future.h"

#include "ICloudPubsub.generated.h"

/** Subscription info.
 *  This is a handle to an subscription as handed out by ICloudPubsub::subscribe()
 */  
USTRUCT(Category = "CloudConnector")
struct CLOUDCONNECTOR_API FSubscription {

	GENERATED_BODY();

	/// Primary identifier for the subscription.
	/// It will be auto generated if empty.
	/// If you choose to set it, CloudConnector will assume this is 
	/// an existing subscription and use it.
	/// In case of AWS this maps to the name of a queue url to create or use.
	/// On Google Pubsub it maps to the subscription name.
	UPROPERTY()
	FString Id;

	/// This is the topic name for Google Pubsub
	/// and the SNS Topic for AWS
	UPROPERTY()
	FString Topic;

	/// True if we used an existing subscription
	UPROPERTY()
	bool Reused = false;

	/// Set this to false to cause the subscription to not automatically poll
	/// new messages after the last one was acknowledged.
	/// This is only implemented on AWS currently
	UPROPERTY()
	bool AutoPoll = true;

	/// These are needed to be able to use FSubscription as key to a TMap
	bool operator==(const FSubscription &n_other) const {

		return Equals(n_other);
	}

	bool Equals(const FSubscription &n_other) const {

		return Id.Equals(n_other.Id) || Topic.Equals(n_other.Topic);
	}
};

FORCEINLINE uint32 GetTypeHash(const FSubscription &n_sub) {

	return FCrc::MemCrc32(&n_sub, sizeof(FSubscription));
}

USTRUCT(Category = "CloudConnector")
struct CLOUDCONNECTOR_API FPubsubMessage {

	GENERATED_BODY();

	public:
		/**
		 * age is in milliseconds
		 */
		uint32  m_message_age;

		/**
		 * depending on the impl we may be able to tell how often the message has been received.
		 * 0 means unknown
		 */
		int m_receive_count = 0;

		/**
		 * message body
		 */
		FString m_body;

	private:
#ifdef WITH_GOOGLECLOUD_SDK
		friend class GooglePubsubImpl;
#endif
		friend class AWSPubsubImpl;
		friend class SQSRunner;
		friend class SQSSubscription;

		/// Pubsub providers have to store implementation specific
		/// details such as message IDs and stuff along with the message.
		/// They are free to do this in here. Please do not mess with the
		/// contents of this field. 
		FString m_details;

		/// internally used by AWS
		FString m_aws_sqs_message_id;

		/// internally used by AWS
		FString m_aws_sqs_receipt;

		/// internally used by Google
		FString m_google_pubsub_message_id;
};

/// a promise created for each message which must be fulfilled by receivers
using PubsubReturnPromise = TPromise<bool>;
using PubsubReturnFuture = TFuture<bool>;
using PubsubReturnPromisePtr = TSharedPtr<PubsubReturnPromise, ESPMode::ThreadSafe>;

/// First parameter is message body
/// Second parameter is a promise the delegate must fulfill. If it's set to true, the message will be deleted
/// Third is a trace object. May be null if the received message did not contain trace info
DECLARE_DELEGATE_TwoParams(FPubsubMessageReceived, const FPubsubMessage, PubsubReturnPromisePtr);

/// First parameter is OK (true) or Error (false)
/// Second parameter is possible error message in case of false
///     or whatever the impl gives us as a message ID in case of true
DECLARE_DELEGATE_TwoParams(FPubsubMessagePublished, const bool, const FString);


/** Provide Pubsub equivalent functionality for AWS and Google Cloud.
 *  I'm trying to consolidate the two behind a common interface.
 *  Let's see how I roll.
 */
class CLOUDCONNECTOR_API ICloudPubsub {

	public:
		/// Maps to a timeout in secs of how long we wait for the SDK to send 
		/// a message before we call the handler with an error
		enum { MessageSendTimeout = 30 };

		virtual ~ICloudPubsub() noexcept = default;

		virtual void shutdown() noexcept = 0;

		/** @brief Publish a message to a topic
		 *  Message is sent converted to UTF8
		 *  You may or may not provide a handler. If the function returns true the
		 *  handler will always be called. If it returns false the handler will never be called.
		 *  Performance-wise it's better to only supply a handler if you need to know when
		 *  and if the message is guaranteed to be sent. Otherwise leave it empty.
		 *  This is required to be safe to call from any thread.
		 */
		virtual bool publish(const FString &n_topic, const FString &n_message, FPubsubMessagePublished &&n_handler = FPubsubMessagePublished{}) = 0;

		/**
		 * @brief Subscribe to the default subscription as specified environment
		 *  variable CLOUDCONNECTOR_DEFAULT_TOPIC
		 *  Users are strongly encouraged to unsubscribe_default().
		 *  This is safe to be called from any thread.
		 *
		 *  @param n_subscription will hold the subscription handle (to unsubscribe)
		 *			if return is false, contents are undefined
		 *  @param n_completion will fire on the game thread (or in its own, depending on config) when the operation is complete
		 *  @return true when the operation was successfully started
		 */
		virtual bool subscribe_default(FSubscription &n_subscription, FPubsubMessageReceived &&n_handler);

		/** 
		 * @brief Subscribe to a "topic" which maps to a SQS Queue URL or a Pubsub topic
		 *  You can subscribe to multiple topics but only once to each. Meaning
		 *  Subscribing twice to the same topic results in undefined behavior.
		 *  Users are strongly encouraged to unsubscribe() from each topic.
		 *  This is safe to be called from any thread.
		 *  If property AutoPoll in n_subscription is false, after the first message is retrieved,
		 *  the next message will only be polled after continue_polling() is called
		 * 
		 *  @param n_topic the Queue URL (SQS) or Topic (Pubsub) you want to subscribe to
		 *  @param n_subscription will hold the subscription handle (to unsubscribe)
		 *			you may preset the value of Id to force a subscription name
		 *			if return is false, contents are undefined.
		 *			Can be filled with Queue / Subscription ID beforehand, which will be used.
		 * 
		 *  @param n_completion will fire on the game thread (or in its own, depending on config) when the operation is complete
		 *  @return true when the operation was successfully started
		 */
		virtual bool subscribe(const FString &n_topic, FSubscription &n_subscription, FPubsubMessageReceived &&n_handler) = 0;
	
		/**
		 * @brief continue to poll a subscription which has AutoPoll false
		 *  If this is not the case the statement has no effect.
		 *  You may call this before a possibly executed message is acknowledged.
		 *  Only implemented on AWS.
		 * @param n_subscription 
		 */
		virtual void continue_polling(FSubscription &n_subscription) = 0;

		/**
		 * @brief Unsubscribe from a subscription
		 *  Remaining messages may be in flight. This blocks until all remaining handlers
		 *  have been called.
		 *  This is safe to be called from any thread.
		 * 
		 *  @param n_subscription As given by subscribe(). Do not attempt to create this yourself.
		 *  
		 *  @return true when the operation was successful
		 */
		virtual bool unsubscribe(FSubscription &&n_subscription) = 0;
};
