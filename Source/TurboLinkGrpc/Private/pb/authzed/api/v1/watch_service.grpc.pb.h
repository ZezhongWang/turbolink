#if defined(_MSC_VER)
  #pragma warning (disable:4946) // reinterpret_cast used between related classes: 'class1' and 'class2'
#endif
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: authzed/api/v1/watch_service.proto
#ifndef GRPC_authzed_2fapi_2fv1_2fwatch_5fservice_2eproto__INCLUDED
#define GRPC_authzed_2fapi_2fv1_2fwatch_5fservice_2eproto__INCLUDED

#include "pb/authzed/api/v1/watch_service.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
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

namespace authzed {
namespace api {
namespace v1 {

class WatchService final {
 public:
  static constexpr char const* service_full_name() {
    return "authzed.api.v1.WatchService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::authzed::api::v1::WatchResponse>> Watch(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::authzed::api::v1::WatchResponse>>(WatchRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::authzed::api::v1::WatchResponse>> AsyncWatch(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::authzed::api::v1::WatchResponse>>(AsyncWatchRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::authzed::api::v1::WatchResponse>> PrepareAsyncWatch(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::authzed::api::v1::WatchResponse>>(PrepareAsyncWatchRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Watch(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest* request, ::grpc::ClientReadReactor< ::authzed::api::v1::WatchResponse>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderInterface< ::authzed::api::v1::WatchResponse>* WatchRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::authzed::api::v1::WatchResponse>* AsyncWatchRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::authzed::api::v1::WatchResponse>* PrepareAsyncWatchRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReader< ::authzed::api::v1::WatchResponse>> Watch(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::authzed::api::v1::WatchResponse>>(WatchRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::authzed::api::v1::WatchResponse>> AsyncWatch(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::authzed::api::v1::WatchResponse>>(AsyncWatchRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::authzed::api::v1::WatchResponse>> PrepareAsyncWatch(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::authzed::api::v1::WatchResponse>>(PrepareAsyncWatchRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Watch(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest* request, ::grpc::ClientReadReactor< ::authzed::api::v1::WatchResponse>* reactor) override;
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
    ::grpc::ClientReader< ::authzed::api::v1::WatchResponse>* WatchRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request) override;
    ::grpc::ClientAsyncReader< ::authzed::api::v1::WatchResponse>* AsyncWatchRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::authzed::api::v1::WatchResponse>* PrepareAsyncWatchRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Watch_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Watch(::grpc::ServerContext* context, const ::authzed::api::v1::WatchRequest* request, ::grpc::ServerWriter< ::authzed::api::v1::WatchResponse>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Watch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Watch() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Watch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Watch(::grpc::ServerContext* /*context*/, const ::authzed::api::v1::WatchRequest* /*request*/, ::grpc::ServerWriter< ::authzed::api::v1::WatchResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWatch(::grpc::ServerContext* context, ::authzed::api::v1::WatchRequest* request, ::grpc::ServerAsyncWriter< ::authzed::api::v1::WatchResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Watch<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Watch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Watch() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::authzed::api::v1::WatchRequest, ::authzed::api::v1::WatchResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::authzed::api::v1::WatchRequest* request) { return this->Watch(context, request); }));
    }
    ~WithCallbackMethod_Watch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Watch(::grpc::ServerContext* /*context*/, const ::authzed::api::v1::WatchRequest* /*request*/, ::grpc::ServerWriter< ::authzed::api::v1::WatchResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::authzed::api::v1::WatchResponse>* Watch(
      ::grpc::CallbackServerContext* /*context*/, const ::authzed::api::v1::WatchRequest* /*request*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Watch<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Watch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Watch() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Watch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Watch(::grpc::ServerContext* /*context*/, const ::authzed::api::v1::WatchRequest* /*request*/, ::grpc::ServerWriter< ::authzed::api::v1::WatchResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Watch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Watch() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Watch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Watch(::grpc::ServerContext* /*context*/, const ::authzed::api::v1::WatchRequest* /*request*/, ::grpc::ServerWriter< ::authzed::api::v1::WatchResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWatch(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Watch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Watch() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->Watch(context, request); }));
    }
    ~WithRawCallbackMethod_Watch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Watch(::grpc::ServerContext* /*context*/, const ::authzed::api::v1::WatchRequest* /*request*/, ::grpc::ServerWriter< ::authzed::api::v1::WatchResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* Watch(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_Watch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_Watch() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::authzed::api::v1::WatchRequest, ::authzed::api::v1::WatchResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::authzed::api::v1::WatchRequest, ::authzed::api::v1::WatchResponse>* streamer) {
                       return this->StreamedWatch(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_Watch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Watch(::grpc::ServerContext* /*context*/, const ::authzed::api::v1::WatchRequest* /*request*/, ::grpc::ServerWriter< ::authzed::api::v1::WatchResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedWatch(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::authzed::api::v1::WatchRequest,::authzed::api::v1::WatchResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_Watch<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_Watch<Service > StreamedService;
};

}  // namespace v1
}  // namespace api
}  // namespace authzed


#endif  // GRPC_authzed_2fapi_2fv1_2fwatch_5fservice_2eproto__INCLUDED
