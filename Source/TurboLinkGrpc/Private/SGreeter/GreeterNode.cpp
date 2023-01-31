//Generated by TurboLink CodeGenerator, do not edit!
#include "SGreeter/GreeterNode.h"
#include "SGreeter/GreeterService.h"
#include "TurboLinkGrpcManager.h"
#include "TurboLinkGrpcUtilities.h"

UCallGreeterServiceHello* UCallGreeterServiceHello::Hello(const FGrpcGreeterHelloRequest& Request)
{
	UCallGreeterServiceHello* node = NewObject<UCallGreeterServiceHello>();
	UTurboLinkGrpcManager* turboLinkManager = UTurboLinkGrpcUtilities::GetTurboLinkGrpcManager();

	node->GreeterService = Cast<UGreeterService>(turboLinkManager->MakeService("GreeterService"));
	if (node->GreeterService == nullptr)
	{
		return nullptr;
	}
	node->Request = Request;

	node->GreeterService->OnServiceStateChanged.AddUniqueDynamic(node, &UCallGreeterServiceHello::OnServiceStateChanged);
	node->GreeterService->Connect();

	return node;
}

void UCallGreeterServiceHello::OnServiceStateChanged(EGrpcServiceState NewState)
{
	if (NewState == EGrpcServiceState::TransientFailure)
	{
		FGrpcResult result;
		result.Code = EGrpcResultCode::ConnectionFailed;

		FGrpcGreeterHelloResponse response;
		OnFail.Broadcast(result, response);

		Shutdown();
		return;
	}

	if (NewState == EGrpcServiceState::Ready)
	{
		GreeterServiceClient = GreeterService->MakeClient();
		GreeterServiceClient->OnContextStateChange.AddUniqueDynamic(this, &UCallGreeterServiceHello::OnContextStateChange);
		GreeterServiceClient->OnHelloResponse.AddUniqueDynamic(this, &UCallGreeterServiceHello::OnResponse);

		Context = GreeterServiceClient->InitHello();
		GreeterServiceClient->Hello(Context, Request);
	}
}

void UCallGreeterServiceHello::OnContextStateChange(FGrpcContextHandle Handle, EGrpcContextState State)
{
	if (State == EGrpcContextState::Done)
	{
		Shutdown();
	}
}

void UCallGreeterServiceHello::OnResponse(FGrpcContextHandle Handle, const FGrpcResult& Result, const FGrpcGreeterHelloResponse& Response)
{
	if (Result.Code == EGrpcResultCode::Ok)
	{
		OnSuccess.Broadcast(Result, Response);
	}
	else
	{
		OnFail.Broadcast(Result, Response);
	}
}

void UCallGreeterServiceHello::Shutdown()
{
	if (GreeterServiceClient != nullptr)
	{
		GreeterServiceClient->Shutdown();
		GreeterServiceClient = nullptr;
	}

	if (GreeterService != nullptr)
	{
		GreeterService->Shutdown();
		GreeterService = nullptr;
	}

	SetReadyToDestroy();
	MarkPendingKill();
}