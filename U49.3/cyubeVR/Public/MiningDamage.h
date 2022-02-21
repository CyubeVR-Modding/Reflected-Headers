#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "MiningDamage.generated.h"

USTRUCT(BlueprintType)
struct FMiningDamage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stone_Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stone_Axe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stone_Shovel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Copper_Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Copper_Axe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Copper_Shovel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Copper_Sledgehammer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Iron_Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Iron_Axe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Iron_Shovel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Iron_Sledgehammer;
    
    CYUBEVR_API FMiningDamage();
};

