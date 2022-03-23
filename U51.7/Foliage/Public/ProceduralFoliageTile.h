#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ProceduralFoliageInstance.h"
#include "ProceduralFoliageTile.generated.h"

class UProceduralFoliageSpawner;

UCLASS()
class FOLIAGE_API UProceduralFoliageTile : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UProceduralFoliageSpawner* FoliageSpawner;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FProceduralFoliageInstance> InstancesArray;
    
public:
    UProceduralFoliageTile();
};

