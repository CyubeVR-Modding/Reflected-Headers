#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "EUWorksResult.h"
#include "RequestGlobalStatsMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRequestGlobalStatsMinimalDelegate, bool, bSuccessful, FUWorksGameID, GameID, EUWorksResult, Result);

