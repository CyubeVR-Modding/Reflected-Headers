#pragma once
#include "CoreMinimal.h"
#include "GetUserStatsForGameDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetUserStatsForGameDelegate, bool, bSuccessful, const FString&, Content);

