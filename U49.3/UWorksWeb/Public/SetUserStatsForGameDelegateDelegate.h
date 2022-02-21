#pragma once
#include "CoreMinimal.h"
#include "SetUserStatsForGameDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetUserStatsForGameDelegate, bool, bSuccessful, const FString&, Content);

