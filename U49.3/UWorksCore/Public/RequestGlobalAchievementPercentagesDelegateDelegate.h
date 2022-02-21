#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "EUWorksResult.h"
#include "RequestGlobalAchievementPercentagesDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRequestGlobalAchievementPercentagesDelegate, bool, bSuccessful, FUWorksGameID, GameID, EUWorksResult, Result);

