#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "EUWorksResult.h"
#include "RequestGlobalAchievementPercentagesMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRequestGlobalAchievementPercentagesMinimalDelegate, bool, bSuccessful, FUWorksGameID, GameID, EUWorksResult, Result);

