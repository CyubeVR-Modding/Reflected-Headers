#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "UserAchievementStoredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FUserAchievementStoredDelegate, FUWorksGameID, GameID, bool, bGroupAchievement, const FString&, AchievementName, int32, CurrentProgress, int32, MaxProgress);

