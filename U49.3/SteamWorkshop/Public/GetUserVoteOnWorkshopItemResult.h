#pragma once
#include "CoreMinimal.h"
#include "GeneralWorkshopItemResult.h"
#include "EVoteType.h"
#include "GetUserVoteOnWorkshopItemResult.generated.h"

USTRUCT(BlueprintType)
struct FGetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EVoteType userVoteType;
    
    STEAMWORKSHOP_API FGetUserVoteOnWorkshopItemResult();
};

