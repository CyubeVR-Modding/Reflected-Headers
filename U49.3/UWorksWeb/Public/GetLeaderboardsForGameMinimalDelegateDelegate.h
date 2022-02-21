#pragma once
#include "CoreMinimal.h"
#include "GetLeaderboardsForGameMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetLeaderboardsForGameMinimalDelegate, bool, bSuccessful, const FString&, Content);

