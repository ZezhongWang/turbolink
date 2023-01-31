// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: authzed/api/v1/watch_service.proto

#include "pb/authzed/api/v1/watch_service.pb.h"
#include "pb/authzed/api/v1/watch_service.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace authzed {
namespace api {
namespace v1 {

static const char* WatchService_method_names[] = {
  "/authzed.api.v1.WatchService/Watch",
};

std::unique_ptr< WatchService::Stub> WatchService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< WatchService::Stub> stub(new WatchService::Stub(channel, options));
  return stub;
}

WatchService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Watch_(WatchService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::authzed::api::v1::WatchResponse>* WatchService::Stub::WatchRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::authzed::api::v1::WatchResponse>::Create(channel_.get(), rpcmethod_Watch_, context, request);
}

void WatchService::Stub::async::Watch(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest* request, ::grpc::ClientReadReactor< ::authzed::api::v1::WatchResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::authzed::api::v1::WatchResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_Watch_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::authzed::api::v1::WatchResponse>* WatchService::Stub::AsyncWatchRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::authzed::api::v1::WatchResponse>::Create(channel_.get(), cq, rpcmethod_Watch_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::authzed::api::v1::WatchResponse>* WatchService::Stub::PrepareAsyncWatchRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WatchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::authzed::api::v1::WatchResponse>::Create(channel_.get(), cq, rpcmethod_Watch_, context, request, false, nullptr);
}

WatchService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      WatchService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< WatchService::Service, ::authzed::api::v1::WatchRequest, ::authzed::api::v1::WatchResponse>(
          [](WatchService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::authzed::api::v1::WatchRequest* req,
             ::grpc::ServerWriter<::authzed::api::v1::WatchResponse>* writer) {
               return service->Watch(ctx, req, writer);
             }, this)));
}

WatchService::Service::~Service() {
}

::grpc::Status WatchService::Service::Watch(::grpc::ServerContext* context, const ::authzed::api::v1::WatchRequest* request, ::grpc::ServerWriter< ::authzed::api::v1::WatchResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace authzed
}  // namespace api
}  // namespace v1
