#pragma once
#include "CoreMinimal.h"
#include "ResetLeaderboardMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FResetLeaderboardMinimalDelegate, bool, bSuccessful, const FString&, Content);

