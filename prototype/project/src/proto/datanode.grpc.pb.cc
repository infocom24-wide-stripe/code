// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: datanode.proto

#include "datanode.pb.h"
#include "datanode.grpc.pb.h"

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
namespace datanode_proto {

static const char* datanodeService_method_names[] = {
  "/datanode_proto.datanodeService/checkalive",
  "/datanode_proto.datanodeService/handleSet",
  "/datanode_proto.datanodeService/handleGet",
  "/datanode_proto.datanodeService/handleDelete",
};

std::unique_ptr< datanodeService::Stub> datanodeService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< datanodeService::Stub> stub(new datanodeService::Stub(channel, options));
  return stub;
}

datanodeService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_checkalive_(datanodeService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_handleSet_(datanodeService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_handleGet_(datanodeService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_handleDelete_(datanodeService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status datanodeService::Stub::checkalive(::grpc::ClientContext* context, const ::datanode_proto::CheckaliveCMD& request, ::datanode_proto::RequestResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::datanode_proto::CheckaliveCMD, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_checkalive_, context, request, response);
}

void datanodeService::Stub::async::checkalive(::grpc::ClientContext* context, const ::datanode_proto::CheckaliveCMD* request, ::datanode_proto::RequestResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::datanode_proto::CheckaliveCMD, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_checkalive_, context, request, response, std::move(f));
}

void datanodeService::Stub::async::checkalive(::grpc::ClientContext* context, const ::datanode_proto::CheckaliveCMD* request, ::datanode_proto::RequestResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_checkalive_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::datanode_proto::RequestResult>* datanodeService::Stub::PrepareAsynccheckaliveRaw(::grpc::ClientContext* context, const ::datanode_proto::CheckaliveCMD& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::datanode_proto::RequestResult, ::datanode_proto::CheckaliveCMD, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_checkalive_, context, request);
}

::grpc::ClientAsyncResponseReader< ::datanode_proto::RequestResult>* datanodeService::Stub::AsynccheckaliveRaw(::grpc::ClientContext* context, const ::datanode_proto::CheckaliveCMD& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynccheckaliveRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status datanodeService::Stub::handleSet(::grpc::ClientContext* context, const ::datanode_proto::SetInfo& request, ::datanode_proto::RequestResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::datanode_proto::SetInfo, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_handleSet_, context, request, response);
}

void datanodeService::Stub::async::handleSet(::grpc::ClientContext* context, const ::datanode_proto::SetInfo* request, ::datanode_proto::RequestResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::datanode_proto::SetInfo, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_handleSet_, context, request, response, std::move(f));
}

void datanodeService::Stub::async::handleSet(::grpc::ClientContext* context, const ::datanode_proto::SetInfo* request, ::datanode_proto::RequestResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_handleSet_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::datanode_proto::RequestResult>* datanodeService::Stub::PrepareAsynchandleSetRaw(::grpc::ClientContext* context, const ::datanode_proto::SetInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::datanode_proto::RequestResult, ::datanode_proto::SetInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_handleSet_, context, request);
}

::grpc::ClientAsyncResponseReader< ::datanode_proto::RequestResult>* datanodeService::Stub::AsynchandleSetRaw(::grpc::ClientContext* context, const ::datanode_proto::SetInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynchandleSetRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status datanodeService::Stub::handleGet(::grpc::ClientContext* context, const ::datanode_proto::GetInfo& request, ::datanode_proto::RequestResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::datanode_proto::GetInfo, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_handleGet_, context, request, response);
}

void datanodeService::Stub::async::handleGet(::grpc::ClientContext* context, const ::datanode_proto::GetInfo* request, ::datanode_proto::RequestResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::datanode_proto::GetInfo, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_handleGet_, context, request, response, std::move(f));
}

void datanodeService::Stub::async::handleGet(::grpc::ClientContext* context, const ::datanode_proto::GetInfo* request, ::datanode_proto::RequestResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_handleGet_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::datanode_proto::RequestResult>* datanodeService::Stub::PrepareAsynchandleGetRaw(::grpc::ClientContext* context, const ::datanode_proto::GetInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::datanode_proto::RequestResult, ::datanode_proto::GetInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_handleGet_, context, request);
}

::grpc::ClientAsyncResponseReader< ::datanode_proto::RequestResult>* datanodeService::Stub::AsynchandleGetRaw(::grpc::ClientContext* context, const ::datanode_proto::GetInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynchandleGetRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status datanodeService::Stub::handleDelete(::grpc::ClientContext* context, const ::datanode_proto::DelInfo& request, ::datanode_proto::RequestResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::datanode_proto::DelInfo, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_handleDelete_, context, request, response);
}

void datanodeService::Stub::async::handleDelete(::grpc::ClientContext* context, const ::datanode_proto::DelInfo* request, ::datanode_proto::RequestResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::datanode_proto::DelInfo, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_handleDelete_, context, request, response, std::move(f));
}

void datanodeService::Stub::async::handleDelete(::grpc::ClientContext* context, const ::datanode_proto::DelInfo* request, ::datanode_proto::RequestResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_handleDelete_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::datanode_proto::RequestResult>* datanodeService::Stub::PrepareAsynchandleDeleteRaw(::grpc::ClientContext* context, const ::datanode_proto::DelInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::datanode_proto::RequestResult, ::datanode_proto::DelInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_handleDelete_, context, request);
}

::grpc::ClientAsyncResponseReader< ::datanode_proto::RequestResult>* datanodeService::Stub::AsynchandleDeleteRaw(::grpc::ClientContext* context, const ::datanode_proto::DelInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynchandleDeleteRaw(context, request, cq);
  result->StartCall();
  return result;
}

datanodeService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      datanodeService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< datanodeService::Service, ::datanode_proto::CheckaliveCMD, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](datanodeService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::datanode_proto::CheckaliveCMD* req,
             ::datanode_proto::RequestResult* resp) {
               return service->checkalive(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      datanodeService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< datanodeService::Service, ::datanode_proto::SetInfo, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](datanodeService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::datanode_proto::SetInfo* req,
             ::datanode_proto::RequestResult* resp) {
               return service->handleSet(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      datanodeService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< datanodeService::Service, ::datanode_proto::GetInfo, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](datanodeService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::datanode_proto::GetInfo* req,
             ::datanode_proto::RequestResult* resp) {
               return service->handleGet(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      datanodeService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< datanodeService::Service, ::datanode_proto::DelInfo, ::datanode_proto::RequestResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](datanodeService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::datanode_proto::DelInfo* req,
             ::datanode_proto::RequestResult* resp) {
               return service->handleDelete(ctx, req, resp);
             }, this)));
}

datanodeService::Service::~Service() {
}

::grpc::Status datanodeService::Service::checkalive(::grpc::ServerContext* context, const ::datanode_proto::CheckaliveCMD* request, ::datanode_proto::RequestResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status datanodeService::Service::handleSet(::grpc::ServerContext* context, const ::datanode_proto::SetInfo* request, ::datanode_proto::RequestResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status datanodeService::Service::handleGet(::grpc::ServerContext* context, const ::datanode_proto::GetInfo* request, ::datanode_proto::RequestResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status datanodeService::Service::handleDelete(::grpc::ServerContext* context, const ::datanode_proto::DelInfo* request, ::datanode_proto::RequestResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace datanode_proto

