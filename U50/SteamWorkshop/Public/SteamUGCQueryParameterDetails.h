#pragma once
#include "CoreMinimal.h"
#include "SteamUGCQueryParameterAllUserDetails.h"
#include "SteamUGCQueryParameterTagsAllUserDetails.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "SteamUGCQueryParameterDetails.generated.h"

USTRUCT(BlueprintType)
struct FSteamUGCQueryParameterDetails : public FSteamUGCQueryParameterAllUserDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCQueryParameterTagsAllUserDetails tagParameter;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamUGCItemId> workshopItemIds;
    
    STEAMWORKSHOP_API FSteamUGCQueryParameterDetails();
};

