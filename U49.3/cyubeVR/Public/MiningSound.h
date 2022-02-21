#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "MiningSound.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FMiningSound : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Stick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Stone_Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Stone_Axe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Stone_Shovel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Copper_Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Copper_Axe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Copper_Shovel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Copper_Sledgehammer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Iron_Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Iron_Axe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Iron_Shovel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Iron_Sledgehammer;
    
    CYUBEVR_API FMiningSound();
};

