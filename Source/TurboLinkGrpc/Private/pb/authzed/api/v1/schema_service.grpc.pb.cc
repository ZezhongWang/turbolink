// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: authzed/api/v1/schema_service.proto

#include "pb/authzed/api/v1/schema_service.pb.h"
#include "pb/authzed/api/v1/schema_service.grpc.pb.h"

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

static const char* SchemaService_method_names[] = {
  "/authzed.api.v1.SchemaService/ReadSchema",
  "/authzed.api.v1.SchemaService/WriteSchema",
};

std::unique_ptr< SchemaService::Stub> SchemaService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SchemaService::Stub> stub(new SchemaService::Stub(channel, options));
  return stub;
}

SchemaService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_ReadSchema_(SchemaService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_WriteSchema_(SchemaService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SchemaService::Stub::ReadSchema(::grpc::ClientContext* context, const ::authzed::api::v1::ReadSchemaRequest& request, ::authzed::api::v1::ReadSchemaResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::authzed::api::v1::ReadSchemaRequest, ::authzed::api::v1::ReadSchemaResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ReadSchema_, context, request, response);
}

void SchemaService::Stub::async::ReadSchema(::grpc::ClientContext* context, const ::authzed::api::v1::ReadSchemaRequest* request, ::authzed::api::v1::ReadSchemaResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::authzed::api::v1::ReadSchemaRequest, ::authzed::api::v1::ReadSchemaResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReadSchema_, context, request, response, std::move(f));
}

void SchemaService::Stub::async::ReadSchema(::grpc::ClientContext* context, const ::authzed::api::v1::ReadSchemaRequest* request, ::authzed::api::v1::ReadSchemaResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReadSchema_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::authzed::api::v1::ReadSchemaResponse>* SchemaService::Stub::PrepareAsyncReadSchemaRaw(::grpc::ClientContext* context, const ::authzed::api::v1::ReadSchemaRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::authzed::api::v1::ReadSchemaResponse, ::authzed::api::v1::ReadSchemaRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ReadSchema_, context, request);
}

::grpc::ClientAsyncResponseReader< ::authzed::api::v1::ReadSchemaResponse>* SchemaService::Stub::AsyncReadSchemaRaw(::grpc::ClientContext* context, const ::authzed::api::v1::ReadSchemaRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReadSchemaRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SchemaService::Stub::WriteSchema(::grpc::ClientContext* context, const ::authzed::api::v1::WriteSchemaRequest& request, ::authzed::api::v1::WriteSchemaResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::authzed::api::v1::WriteSchemaRequest, ::authzed::api::v1::WriteSchemaResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_WriteSchema_, context, request, response);
}

void SchemaService::Stub::async::WriteSchema(::grpc::ClientContext* context, const ::authzed::api::v1::WriteSchemaRequest* request, ::authzed::api::v1::WriteSchemaResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::authzed::api::v1::WriteSchemaRequest, ::authzed::api::v1::WriteSchemaResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_WriteSchema_, context, request, response, std::move(f));
}

void SchemaService::Stub::async::WriteSchema(::grpc::ClientContext* context, const ::authzed::api::v1::WriteSchemaRequest* request, ::authzed::api::v1::WriteSchemaResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_WriteSchema_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::authzed::api::v1::WriteSchemaResponse>* SchemaService::Stub::PrepareAsyncWriteSchemaRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WriteSchemaRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::authzed::api::v1::WriteSchemaResponse, ::authzed::api::v1::WriteSchemaRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_WriteSchema_, context, request);
}

::grpc::ClientAsyncResponseReader< ::authzed::api::v1::WriteSchemaResponse>* SchemaService::Stub::AsyncWriteSchemaRaw(::grpc::ClientContext* context, const ::authzed::api::v1::WriteSchemaRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncWriteSchemaRaw(context, request, cq);
  result->StartCall();
  return result;
}

SchemaService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SchemaService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SchemaService::Service, ::authzed::api::v1::ReadSchemaRequest, ::authzed::api::v1::ReadSchemaResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SchemaService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::authzed::api::v1::ReadSchemaRequest* req,
             ::authzed::api::v1::ReadSchemaResponse* resp) {
               return service->ReadSchema(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SchemaService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SchemaService::Service, ::authzed::api::v1::WriteSchemaRequest, ::authzed::api::v1::WriteSchemaResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SchemaService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::authzed::api::v1::WriteSchemaRequest* req,
             ::authzed::api::v1::WriteSchemaResponse* resp) {
               return service->WriteSchema(ctx, req, resp);
             }, this)));
}

SchemaService::Service::~Service() {
}

::grpc::Status SchemaService::Service::ReadSchema(::grpc::ServerContext* context, const ::authzed::api::v1::ReadSchemaRequest* request, ::authzed::api::v1::ReadSchemaResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SchemaService::Service::WriteSchema(::grpc::ServerContext* context, const ::authzed::api::v1::WriteSchemaRequest* request, ::authzed::api::v1::WriteSchemaResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace authzed
}  // namespace api
}  // namespace v1
