#pragma once
#include "CoreMinimal.h"
#include "DeleteLeaderboardDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeleteLeaderboardDelegate, bool, bSuccessful, const FString&, Content);

