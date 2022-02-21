#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
#include "UpdateWorkshopItemResult.generated.h"

USTRUCT(BlueprintType)
struct FUpdateWorkshopItemResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bUserNeedsToAcceptWorkshopLegalAgreement;
    
    STEAMWORKSHOP_API FUpdateWorkshopItemResult();
};

