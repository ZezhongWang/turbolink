#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "TurboLinkGrpcSystem.h"
#include "TurboLinkGrpcConfig.h"

DECLARE_LOG_CATEGORY_EXTERN(LogTurboLink, Log, All);

class TURBOLINKGRPC_API FTurboLinkGrpcModule : public FTickableGameObject, public IModuleInterface
{
	friend class UTurboLinkGrpcSystem;
public:
	// IModuleInterface implementation
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	// FTickableGameObject implementation
	bool IsTickable() const override { return TurboLinkGrpcManager!=nullptr; }
	TStatId GetStatId() const override { return TStatId();	}
	void Tick(float DeltaTime) override;

	UTurboLinkGrpcSystem* GetTurboLinkGrpcManager();

	UTurboLinkGrpcConfig* GetTurboLinkGrpcConfig();
	
private:
	UTurboLinkGrpcSystem* TurboLinkGrpcManager;
#if WITH_EDITOR
	TSharedPtr<FTurboLinkGrpcConfig> ConfigInstance;
#else
	UTurboLinkGrpcConfig* ConfigInstance;
#endif

public:
	FTurboLinkGrpcModule();
	~FTurboLinkGrpcModule();
};
