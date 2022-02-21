#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EnumerateFollowingListMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FiveParams(FEnumerateFollowingListMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, const TArray<FUWorksSteamID>&, SteamIDs, int32, ResultsReturned, int32, TotalResultCount);

