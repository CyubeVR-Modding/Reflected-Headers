#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshMaterialSlot.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshMaterialSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* Material;
    
    FRuntimeMeshMaterialSlot();
};

