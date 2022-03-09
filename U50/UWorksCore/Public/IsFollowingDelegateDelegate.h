#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "IsFollowingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FIsFollowingDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksSteamID, SteamID, bool, bIsFollowing);

