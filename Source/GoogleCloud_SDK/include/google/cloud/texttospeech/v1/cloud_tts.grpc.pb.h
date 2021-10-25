// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/texttospeech/v1/cloud_tts.proto
// Original file comments:
// Copyright 2019 Google LLC.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//
#ifndef GRPC_google_2fcloud_2ftexttospeech_2fv1_2fcloud_5ftts_2eproto__INCLUDED
#define GRPC_google_2fcloud_2ftexttospeech_2fv1_2fcloud_5ftts_2eproto__INCLUDED

#include "google/cloud/texttospeech/v1/cloud_tts.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace google {
namespace cloud {
namespace texttospeech {
namespace v1 {

// Service that implements Google Cloud Text-to-Speech API.
class TextToSpeech final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.texttospeech.v1.TextToSpeech";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Returns a list of Voice supported for synthesis.
    virtual ::grpc::Status ListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::ListVoicesResponse>> AsyncListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::ListVoicesResponse>>(AsyncListVoicesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::ListVoicesResponse>> PrepareAsyncListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::ListVoicesResponse>>(PrepareAsyncListVoicesRaw(context, request, cq));
    }
    // Synthesizes speech synchronously: receive results after all text input
    // has been processed.
    virtual ::grpc::Status SynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>> AsyncSynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>>(AsyncSynthesizeSpeechRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>> PrepareAsyncSynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>>(PrepareAsyncSynthesizeSpeechRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Returns a list of Voice supported for synthesis.
      virtual void ListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest* request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest* request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // Synthesizes speech synchronously: receive results after all text input
      // has been processed.
      virtual void SynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::ListVoicesResponse>* AsyncListVoicesRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::ListVoicesResponse>* PrepareAsyncListVoicesRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* AsyncSynthesizeSpeechRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* PrepareAsyncSynthesizeSpeechRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status ListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::ListVoicesResponse>> AsyncListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::ListVoicesResponse>>(AsyncListVoicesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::ListVoicesResponse>> PrepareAsyncListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::ListVoicesResponse>>(PrepareAsyncListVoicesRaw(context, request, cq));
    }
    ::grpc::Status SynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>> AsyncSynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>>(AsyncSynthesizeSpeechRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>> PrepareAsyncSynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>>(PrepareAsyncSynthesizeSpeechRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void ListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest* request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response, std::function<void(::grpc::Status)>) override;
      void ListVoices(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest* request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      void SynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response, std::function<void(::grpc::Status)>) override;
      void SynthesizeSpeech(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::ListVoicesResponse>* AsyncListVoicesRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::ListVoicesResponse>* PrepareAsyncListVoicesRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* AsyncSynthesizeSpeechRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* PrepareAsyncSynthesizeSpeechRaw(::grpc::ClientContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ListVoices_;
    const ::grpc::internal::RpcMethod rpcmethod_SynthesizeSpeech_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Returns a list of Voice supported for synthesis.
    virtual ::grpc::Status ListVoices(::grpc::ServerContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest* request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response);
    // Synthesizes speech synchronously: receive results after all text input
    // has been processed.
    virtual ::grpc::Status SynthesizeSpeech(::grpc::ServerContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ListVoices : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_ListVoices() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ListVoices() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListVoices(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::ListVoicesRequest* /*request*/, ::google::cloud::texttospeech::v1::ListVoicesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListVoices(::grpc::ServerContext* context, ::google::cloud::texttospeech::v1::ListVoicesRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::texttospeech::v1::ListVoicesResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SynthesizeSpeech : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SynthesizeSpeech() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SynthesizeSpeech() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SynthesizeSpeech(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* /*request*/, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSynthesizeSpeech(::grpc::ServerContext* context, ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ListVoices<WithAsyncMethod_SynthesizeSpeech<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_ListVoices : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_ListVoices() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::google::cloud::texttospeech::v1::ListVoicesRequest, ::google::cloud::texttospeech::v1::ListVoicesResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::google::cloud::texttospeech::v1::ListVoicesRequest* request, ::google::cloud::texttospeech::v1::ListVoicesResponse* response) { return this->ListVoices(context, request, response); }));}
    void SetMessageAllocatorFor_ListVoices(
        ::grpc::MessageAllocator< ::google::cloud::texttospeech::v1::ListVoicesRequest, ::google::cloud::texttospeech::v1::ListVoicesResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::cloud::texttospeech::v1::ListVoicesRequest, ::google::cloud::texttospeech::v1::ListVoicesResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_ListVoices() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListVoices(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::ListVoicesRequest* /*request*/, ::google::cloud::texttospeech::v1::ListVoicesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListVoices(
      ::grpc::CallbackServerContext* /*context*/, const ::google::cloud::texttospeech::v1::ListVoicesRequest* /*request*/, ::google::cloud::texttospeech::v1::ListVoicesResponse* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_SynthesizeSpeech : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SynthesizeSpeech() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* request, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* response) { return this->SynthesizeSpeech(context, request, response); }));}
    void SetMessageAllocatorFor_SynthesizeSpeech(
        ::grpc::MessageAllocator< ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SynthesizeSpeech() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SynthesizeSpeech(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* /*request*/, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SynthesizeSpeech(
      ::grpc::CallbackServerContext* /*context*/, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* /*request*/, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_ListVoices<WithCallbackMethod_SynthesizeSpeech<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_ListVoices : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_ListVoices() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ListVoices() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListVoices(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::ListVoicesRequest* /*request*/, ::google::cloud::texttospeech::v1::ListVoicesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SynthesizeSpeech : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SynthesizeSpeech() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SynthesizeSpeech() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SynthesizeSpeech(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* /*request*/, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_ListVoices : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_ListVoices() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_ListVoices() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListVoices(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::ListVoicesRequest* /*request*/, ::google::cloud::texttospeech::v1::ListVoicesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListVoices(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_SynthesizeSpeech : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SynthesizeSpeech() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_SynthesizeSpeech() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SynthesizeSpeech(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* /*request*/, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSynthesizeSpeech(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_ListVoices : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_ListVoices() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->ListVoices(context, request, response); }));
    }
    ~WithRawCallbackMethod_ListVoices() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListVoices(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::ListVoicesRequest* /*request*/, ::google::cloud::texttospeech::v1::ListVoicesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListVoices(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SynthesizeSpeech : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SynthesizeSpeech() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SynthesizeSpeech(context, request, response); }));
    }
    ~WithRawCallbackMethod_SynthesizeSpeech() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SynthesizeSpeech(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* /*request*/, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SynthesizeSpeech(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ListVoices : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_ListVoices() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::cloud::texttospeech::v1::ListVoicesRequest, ::google::cloud::texttospeech::v1::ListVoicesResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::cloud::texttospeech::v1::ListVoicesRequest, ::google::cloud::texttospeech::v1::ListVoicesResponse>* streamer) {
                       return this->StreamedListVoices(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_ListVoices() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ListVoices(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::ListVoicesRequest* /*request*/, ::google::cloud::texttospeech::v1::ListVoicesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedListVoices(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::texttospeech::v1::ListVoicesRequest,::google::cloud::texttospeech::v1::ListVoicesResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SynthesizeSpeech : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SynthesizeSpeech() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* streamer) {
                       return this->StreamedSynthesizeSpeech(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SynthesizeSpeech() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SynthesizeSpeech(::grpc::ServerContext* /*context*/, const ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest* /*request*/, ::google::cloud::texttospeech::v1::SynthesizeSpeechResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSynthesizeSpeech(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::texttospeech::v1::SynthesizeSpeechRequest,::google::cloud::texttospeech::v1::SynthesizeSpeechResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ListVoices<WithStreamedUnaryMethod_SynthesizeSpeech<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ListVoices<WithStreamedUnaryMethod_SynthesizeSpeech<Service > > StreamedService;
};

}  // namespace v1
}  // namespace texttospeech
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2ftexttospeech_2fv1_2fcloud_5ftts_2eproto__INCLUDED
