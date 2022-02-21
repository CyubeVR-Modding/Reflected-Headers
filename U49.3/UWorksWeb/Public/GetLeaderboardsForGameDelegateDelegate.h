#pragma once
#include "CoreMinimal.h"
#include "GetLeaderboardsForGameDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetLeaderboardsForGameDelegate, bool, bSuccessful, const FString&, Content);

