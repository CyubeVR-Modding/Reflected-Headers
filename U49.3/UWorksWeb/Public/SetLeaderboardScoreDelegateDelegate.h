#pragma once
#include "CoreMinimal.h"
#include "SetLeaderboardScoreDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetLeaderboardScoreDelegate, bool, bSuccessful, const FString&, Content);

