#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "StorageItem.generated.h"

USTRUCT(BlueprintType)
struct FStorageItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor CrystalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeState;
    
    CYUBEVR_API FStorageItem();
};

