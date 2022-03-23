#pragma once
#include "CoreMinimal.h"
#include "SteamResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "GeneralWorkshopItemResult.generated.h"

USTRUCT(BlueprintType)
struct FGeneralWorkshopItemResult : public FSteamResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCItemId workshopItemID;
    
    STEAMWORKSHOP_API FGeneralWorkshopItemResult();
};

