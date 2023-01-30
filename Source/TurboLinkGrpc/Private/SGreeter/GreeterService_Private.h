//Generated by TurboLink CodeGenerator, do not edit!
#pragma once

#include "SGreeter/GreeterService.h"
#include "TurboLinkGrpcManager_Private.h"
#include "pb/hello.grpc.pb.h"
#include "GreeterService_Private.generated.h"

class UGreeterService::Private
{
public:
	std::shared_ptr<UTurboLinkGrpcManager::Private::ServiceChannel> Channel;
	std::unique_ptr<::Greeter::GreeterService::Stub> Stub;
};
class UTimeService::Private
{
public:
	std::shared_ptr<UTurboLinkGrpcManager::Private::ServiceChannel> Channel;
	std::unique_ptr<::Greeter::TimeService::Stub> Stub;
};

UCLASS()
class UGreeterServiceHelloLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UGreeterServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& Result, const FGrpcGreeterHelloResponse& Response);
public:
	FGrpcContextHandle Handle;
	UGreeterService::FHelloLambda Lambda;
};

UCLASS()
class UTimeServiceTicktokLambdaWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UTimeServiceClient* InnerClient;

	UFUNCTION()
	void OnResponse(FGrpcContextHandle Handle, const FGrpcResult& Result, const FGrpcGreeterNowResponse& Response);
	UFUNCTION()
	void OnContextStateChanged(FGrpcContextHandle Handle, EGrpcContextState NewState);
public:
	FGrpcContextHandle Handle;
	UTimeService::FTicktokLambda Lambda;
};

