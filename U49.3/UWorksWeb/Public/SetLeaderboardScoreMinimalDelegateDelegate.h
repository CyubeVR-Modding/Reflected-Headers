#pragma once
#include "CoreMinimal.h"
#include "SetLeaderboardScoreMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetLeaderboardScoreMinimalDelegate, bool, bSuccessful, const FString&, Content);

