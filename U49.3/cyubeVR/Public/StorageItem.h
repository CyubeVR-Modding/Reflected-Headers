#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "StorageItem.generated.h"

USTRUCT(BlueprintType)
struct FStorageItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBlockTypeBP Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Amount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor CrystalColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChargeState;
    
    CYUBEVR_API FStorageItem();
};

