#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshCollisionSourceSectionInfo.h"
#include "RuntimeMeshAsyncBodySetupData.generated.h"

class UBodySetup;

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshAsyncBodySetupData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBodySetup* BodySetup;
    
    UPROPERTY()
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSources;
    
    FRuntimeMeshAsyncBodySetupData();
};

