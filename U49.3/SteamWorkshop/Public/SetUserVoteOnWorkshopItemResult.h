#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
#include "SetUserVoteOnWorkshopItemResult.generated.h"

USTRUCT(BlueprintType)
struct FSetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bVoteUp;
    
    STEAMWORKSHOP_API FSetUserVoteOnWorkshopItemResult();
};

