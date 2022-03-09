#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RuntimeMeshComponent -ObjectName=RuntimeMeshProvider -FallbackName=RuntimeMeshProvider
#include "RuntimeMeshProviderChunks.generated.h"

UCLASS()
class URuntimeMeshProviderChunks : public URuntimeMeshProvider {
    GENERATED_BODY()
public:
    URuntimeMeshProviderChunks();
};

