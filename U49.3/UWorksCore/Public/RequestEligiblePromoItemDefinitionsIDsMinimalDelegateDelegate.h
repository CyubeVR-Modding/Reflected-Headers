#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RequestEligiblePromoItemDefinitionsIDsMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FiveParams(FRequestEligiblePromoItemDefinitionsIDsMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, int32, NumEligiblePromoItemsDefinitionsIDs, bool, bCachedData);

