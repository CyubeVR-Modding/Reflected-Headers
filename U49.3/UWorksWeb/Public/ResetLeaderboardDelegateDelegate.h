#pragma once
#include "CoreMinimal.h"
#include "ResetLeaderboardDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResetLeaderboardDelegate, bool, bSuccessful, const FString&, Content);

