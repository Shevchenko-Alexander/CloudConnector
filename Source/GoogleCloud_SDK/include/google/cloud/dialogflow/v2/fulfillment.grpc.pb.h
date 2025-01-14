// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/cloud/dialogflow/v2/fulfillment.proto
// Original file comments:
// Copyright 2022 Google LLC
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
#ifndef GRPC_google_2fcloud_2fdialogflow_2fv2_2ffulfillment_2eproto__INCLUDED
#define GRPC_google_2fcloud_2fdialogflow_2fv2_2ffulfillment_2eproto__INCLUDED

#include "google/cloud/dialogflow/v2/fulfillment.pb.h"

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
namespace dialogflow {
namespace v2 {

// Service for managing [Fulfillments][google.cloud.dialogflow.v2.Fulfillment].
class Fulfillments final {
 public:
  static constexpr char const* service_full_name() {
    return "google.cloud.dialogflow.v2.Fulfillments";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Retrieves the fulfillment.
    virtual ::grpc::Status GetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::google::cloud::dialogflow::v2::Fulfillment* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>> AsyncGetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>>(AsyncGetFulfillmentRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>> PrepareAsyncGetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>>(PrepareAsyncGetFulfillmentRaw(context, request, cq));
    }
    // Updates the fulfillment.
    virtual ::grpc::Status UpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::google::cloud::dialogflow::v2::Fulfillment* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>> AsyncUpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>>(AsyncUpdateFulfillmentRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>> PrepareAsyncUpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>>(PrepareAsyncUpdateFulfillmentRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Retrieves the fulfillment.
      virtual void GetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      // Updates the fulfillment.
      virtual void UpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response, std::function<void(::grpc::Status)>) = 0;
      virtual void UpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>* AsyncGetFulfillmentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>* PrepareAsyncGetFulfillmentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>* AsyncUpdateFulfillmentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::dialogflow::v2::Fulfillment>* PrepareAsyncUpdateFulfillmentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::google::cloud::dialogflow::v2::Fulfillment* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>> AsyncGetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>>(AsyncGetFulfillmentRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>> PrepareAsyncGetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>>(PrepareAsyncGetFulfillmentRaw(context, request, cq));
    }
    ::grpc::Status UpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::google::cloud::dialogflow::v2::Fulfillment* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>> AsyncUpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>>(AsyncUpdateFulfillmentRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>> PrepareAsyncUpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>>(PrepareAsyncUpdateFulfillmentRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response, std::function<void(::grpc::Status)>) override;
      void GetFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response, ::grpc::ClientUnaryReactor* reactor) override;
      void UpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response, std::function<void(::grpc::Status)>) override;
      void UpdateFulfillment(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>* AsyncGetFulfillmentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>* PrepareAsyncGetFulfillmentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>* AsyncUpdateFulfillmentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::dialogflow::v2::Fulfillment>* PrepareAsyncUpdateFulfillmentRaw(::grpc::ClientContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetFulfillment_;
    const ::grpc::internal::RpcMethod rpcmethod_UpdateFulfillment_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Retrieves the fulfillment.
    virtual ::grpc::Status GetFulfillment(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response);
    // Updates the fulfillment.
    virtual ::grpc::Status UpdateFulfillment(::grpc::ServerContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetFulfillment() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetFulfillment(::grpc::ServerContext* context, ::google::cloud::dialogflow::v2::GetFulfillmentRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::dialogflow::v2::Fulfillment>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_UpdateFulfillment() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_UpdateFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateFulfillment(::grpc::ServerContext* context, ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::dialogflow::v2::Fulfillment>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetFulfillment<WithAsyncMethod_UpdateFulfillment<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GetFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetFulfillment() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::google::cloud::dialogflow::v2::GetFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response) { return this->GetFulfillment(context, request, response); }));}
    void SetMessageAllocatorFor_GetFulfillment(
        ::grpc::MessageAllocator< ::google::cloud::dialogflow::v2::GetFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::cloud::dialogflow::v2::GetFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetFulfillment(
      ::grpc::CallbackServerContext* /*context*/, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_UpdateFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_UpdateFulfillment() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* request, ::google::cloud::dialogflow::v2::Fulfillment* response) { return this->UpdateFulfillment(context, request, response); }));}
    void SetMessageAllocatorFor_UpdateFulfillment(
        ::grpc::MessageAllocator< ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_UpdateFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* UpdateFulfillment(
      ::grpc::CallbackServerContext* /*context*/, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GetFulfillment<WithCallbackMethod_UpdateFulfillment<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetFulfillment() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UpdateFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_UpdateFulfillment() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_UpdateFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetFulfillment() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetFulfillment(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_UpdateFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_UpdateFulfillment() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_UpdateFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateFulfillment(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetFulfillment() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetFulfillment(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetFulfillment(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_UpdateFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_UpdateFulfillment() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->UpdateFulfillment(context, request, response); }));
    }
    ~WithRawCallbackMethod_UpdateFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* UpdateFulfillment(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetFulfillment() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::cloud::dialogflow::v2::GetFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::cloud::dialogflow::v2::GetFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>* streamer) {
                       return this->StreamedGetFulfillment(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::GetFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetFulfillment(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::dialogflow::v2::GetFulfillmentRequest,::google::cloud::dialogflow::v2::Fulfillment>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_UpdateFulfillment : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_UpdateFulfillment() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest, ::google::cloud::dialogflow::v2::Fulfillment>* streamer) {
                       return this->StreamedUpdateFulfillment(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_UpdateFulfillment() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status UpdateFulfillment(::grpc::ServerContext* /*context*/, const ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest* /*request*/, ::google::cloud::dialogflow::v2::Fulfillment* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedUpdateFulfillment(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::cloud::dialogflow::v2::UpdateFulfillmentRequest,::google::cloud::dialogflow::v2::Fulfillment>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetFulfillment<WithStreamedUnaryMethod_UpdateFulfillment<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetFulfillment<WithStreamedUnaryMethod_UpdateFulfillment<Service > > StreamedService;
};

}  // namespace v2
}  // namespace dialogflow
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2fdialogflow_2fv2_2ffulfillment_2eproto__INCLUDED
