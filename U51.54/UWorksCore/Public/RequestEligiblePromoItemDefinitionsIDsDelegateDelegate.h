#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RequestEligiblePromoItemDefinitionsIDsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FRequestEligiblePromoItemDefinitionsIDsDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, int32, NumEligiblePromoItemsDefinitionsIDs, bool, bCachedData);

