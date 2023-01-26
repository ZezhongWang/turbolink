#include "TurboLinkGrpcUtilities.h"
#include "TurboLinkGrpcModule.h"

UTurboLinkGrpcSystem* UTurboLinkGrpcUtilities::GetTurboLinkGrpcSystem()
{
    FTurboLinkGrpcModule* turboLinkModule = FModuleManager::GetModulePtr<FTurboLinkGrpcModule>("TurboLinkGrpc");
    if (turboLinkModule == nullptr)
    {
        turboLinkModule = &(FModuleManager::LoadModuleChecked<FTurboLinkGrpcModule>("TurboLinkGrpc"));
    }

    return turboLinkModule->GetTurboLinkGrpcManager();
}

UTurboLinkGrpcConfig* UTurboLinkGrpcUtilities::GetTurboLinkGrpcConfig()
{
    FTurboLinkGrpcModule* turboLinkModule = FModuleManager::GetModulePtr<FTurboLinkGrpcModule>("TurboLinkGrpc");
    if (turboLinkModule == nullptr)
    {
        turboLinkModule = &(FModuleManager::LoadModuleChecked<FTurboLinkGrpcModule>("TurboLinkGrpc"));
    }

    return turboLinkModule->GetTurboLinkGrpcConfig();
}
