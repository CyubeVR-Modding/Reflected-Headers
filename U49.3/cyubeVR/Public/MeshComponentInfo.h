#pragma once
#include "CoreMinimal.h"
#include "MeshComponentInfo.generated.h"

class URuntimeMeshComponent;
class URuntimeMeshProviderChunks;

USTRUCT()
struct FMeshComponentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    URuntimeMeshComponent* RMC;
    
    UPROPERTY()
    URuntimeMeshProviderChunks* RuntimeMeshProvider;
    
    CYUBEVR_API FMeshComponentInfo();
};

