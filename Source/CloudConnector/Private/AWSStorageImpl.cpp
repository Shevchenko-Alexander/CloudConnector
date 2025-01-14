/* (c) 2021 by Stephan Menzel
 * Licensed under the Apache License, Version 2.0.
 * See attached file LICENSE for full details
 */
#include "AWSStorageImpl.h"
#include "ICloudConnector.h"
#include "TraceMacros.h"
#include "ClientFactory.h"

#include "Async/Async.h"
#include "Internationalization/Regex.h"

 // AWS SDK
#include "Windows/PreWindowsApi.h"
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/s3-crt/S3CrtClient.h>
#include <aws/s3-crt/model/PutObjectRequest.h>
#include <aws/s3-crt/model/PutObjectResult.h>
#include <aws/s3-crt/model/ListObjectsRequest.h>
#include <aws/s3-crt/model/ListObjectsResult.h>
#include "Windows/PostWindowsApi.h"

// std
#include <iostream>
#include <memory>
#include <strstream>
#include <fstream>

using namespace Aws::S3Crt::Model;

/* Those objects are supposedly threadsafe and tests have shown that they really appear to be so
 * it seems to be safe to concurrently access this from multiple threads at once
 */
static Aws::UniquePtr<Aws::S3Crt::S3CrtClient> s_s3_client;

// we use those as identifiers for our segments in case traces are enabled
static const FString s_s3_exists_segment = TEXT("S3 Exists");
static const FString s_s3_write_segment  = TEXT("S3 Write");

namespace {

bool valid_s3_bucket_name(const FString &n_bucket_name) {

	// see https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html
	// for the regex see https://stackoverflow.com/questions/50480924/regex-for-s3-bucket-name/50484916

	const FRegexPattern pattern{ TEXT("(?!^(\\d{1,3}\\.){3}\\d{1,3}$)(^[a-z0-9]([a-z0-9-]*(\\.[a-z0-9])?)*$(?<!\\-))") };
	FRegexMatcher matcher(pattern, n_bucket_name);

	if (!matcher.FindNext()) {
		UE_LOG(LogCloudConnector, Warning, TEXT("Invalid bucket name: %s"), *n_bucket_name);
		return false;
	}

	return true;
}

bool valid_s3_object_key(const FString &n_object_key) {

	// see https://stackoverflow.com/questions/58712045/regular-expression-for-amazon-s3-object-name

	const FRegexPattern pattern{ TEXT("^[a-zA-Z0-9!_.*'()-]+(/[a-zA-Z0-9!_.*'()-]+)*$") };
	FRegexMatcher matcher(pattern, n_object_key);

	if (!matcher.FindNext()) {
		UE_LOG(LogCloudConnector, Warning, TEXT("Invalid object key: %s"), *n_object_key);
		return false;
	}

	return true;
}

} // anon ns

bool AWSStorageImpl::exists(const FCloudStorageKey &n_key, 
		const FCloudStorageExistsFinishedDelegate n_completion, ICloudTracePtr n_trace /*= CloudTracePtr{}*/) {

	CC_START_TRACE_SEGMENT(n_trace, s_s3_exists_segment);

	// Let's do some sanity checks on the bucket and key names
	if (!valid_s3_bucket_name(n_key.BucketName)) {
		CC_END_TRACE_SEGMENT_ERROR(n_trace, s_s3_exists_segment);
		return false;
	}

	if (!valid_s3_object_key(n_key.ObjectKey)) {
		CC_END_TRACE_SEGMENT_ERROR(n_trace, s_s3_exists_segment);
		return false;
	}

	// Create a S3 client object and assemble request
	// We have to do that outside our thread to avoid the possible race of
	// two ops
	if (!s_s3_client) {
		s_s3_client = aws_client_factory<Aws::S3Crt::S3CrtClient>::create();
	}

	// technically it's a bit of an overkill to go async here but this impl
	// is mostly a demo for what real impls are supposed to do, such as check
	// a cloud backend. So I go async and back again
	Async(EAsyncExecution::ThreadPool, [n_key, n_completion, n_trace] {

		ListObjectsRequest request;
		request.SetBucket(TCHAR_TO_ANSI(*n_key.BucketName));
		request.SetPrefix(TCHAR_TO_ANSI(*n_key.ObjectKey));
		request.SetMaxKeys(1);

		// send the list request
		const ListObjectsOutcome outcome = s_s3_client->ListObjects(request);

		// When completing the trace, I chose not to include the times for 
		// the return handler
		if (n_trace) {
			n_trace->end_segment(s_s3_exists_segment, !outcome.IsSuccess());
		}

		Async(EAsyncExecution::TaskGraphMainThread, [outcome, n_key, n_completion, n_trace] {
			if (!outcome.IsSuccess()) {
				const FString msg = FString::Printf(TEXT("Failed to check for existance of '%s' in bucket '%s': %s"),
						*n_key.ObjectKey, *n_key.BucketName, UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
				UE_LOG(LogCloudConnector, Warning, TEXT("%s"), *msg);
				n_completion.ExecuteIfBound(false, false, msg);
			} else {
				if (outcome.GetResult().GetContents().empty()) {
					const FString msg = FString::Printf(TEXT("'%s' does not exist in bucket '%s'"),
							*n_key.ObjectKey, *n_key.BucketName);
					UE_LOG(LogCloudConnector, Display, TEXT("%s"), *msg);
					n_completion.ExecuteIfBound(true, false, msg);
				} else {
					const FString msg = FString::Printf(TEXT("'%s' exists in bucket '%s'"),
							*n_key.ObjectKey, *n_key.BucketName);
					UE_LOG(LogCloudConnector, Display, TEXT("%s"), *msg);
					n_completion.ExecuteIfBound(true, true, msg);
				}
			}
		});
	});

	return true;
}

bool AWSStorageImpl::write(const FCloudStorageKey &n_key, const TArrayView<const uint8> n_data,
		const FCloudStorageWriteFinishedDelegate n_completion, ICloudTracePtr n_trace /* = CloudTracePtr{}*/) {

	CC_START_TRACE_SEGMENT(n_trace, s_s3_write_segment);

	if (!n_data.Num()) {
		CC_END_TRACE_SEGMENT_ERROR(n_trace, s_s3_write_segment);
		return false;
	}

	// Let's do some sanity checks on the bucket and key names
	if (!valid_s3_bucket_name(n_key.BucketName)) {
		CC_END_TRACE_SEGMENT_ERROR(n_trace, s_s3_write_segment);
		return false;
	}

	if (!valid_s3_object_key(n_key.ObjectKey)) {
		CC_END_TRACE_SEGMENT_ERROR(n_trace, s_s3_write_segment);
		return false;
	}

	// Create a S3 client object and assemble request
	if (!s_s3_client) {
		s_s3_client = aws_client_factory<Aws::S3Crt::S3CrtClient>::create();
	}

	Async(EAsyncExecution::ThreadPool, [n_key, n_data, n_completion, n_trace] {

		UE_LOG(LogCloudConnector, Display, TEXT("Starting S3 upload"));

		PutObjectRequest request;
		request.SetBucket(TCHAR_TO_ANSI(*n_key.BucketName));
		request.SetKey(TCHAR_TO_ANSI(*n_key.ObjectKey));
		request.SetContentType(TCHAR_TO_ANSI(*n_key.ContentType));

		// Create a streambuf wrapper around our buffer without copying it
		std::strstreambuf sbuf{ n_data.GetData(), static_cast<std::streamsize>(n_data.Num()) };

		// stream to read from data buffer. This needs to be an IOStream although there's no modifying it
		std::shared_ptr<Aws::IOStream> sinput =
				Aws::MakeShared<Aws::IOStream>("CCS3Allocation", &sbuf);

		request.SetBody(sinput);

		// send the put request
		const PutObjectOutcome outcome = s_s3_client->PutObject(request);
		
		// When completing the trace, I chose not to include the times for return handler
		if (n_trace) {
			n_trace->end_segment(s_s3_write_segment, !outcome.IsSuccess());
		}

		// Sync back to the game thread when done and call delegate
		Async(EAsyncExecution::TaskGraphMainThread, [outcome, n_key, n_completion] {

			if (outcome.IsSuccess()) {
				const FString msg = FString::Printf(TEXT("Successfully uploaded '%s' to bucket '%s'"),
					*n_key.ObjectKey, *n_key.BucketName);
				UE_LOG(LogCloudConnector, Display, TEXT("%s"), *msg);
				n_completion.ExecuteIfBound(true, msg);
			} else {
				const FString msg = FString::Printf(TEXT("Failed uploading '%s' to bucket '%s': %s"),
					*n_key.ObjectKey, *n_key.BucketName, UTF8_TO_TCHAR(outcome.GetError().GetMessage().c_str()));
				UE_LOG(LogCloudConnector, Warning, TEXT("%s"), *msg);
				n_completion.ExecuteIfBound(false, msg);
			}
		});
	});

	return true;
}
