#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "IsFollowingMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FIsFollowingMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, bool, bIsFollowing);

