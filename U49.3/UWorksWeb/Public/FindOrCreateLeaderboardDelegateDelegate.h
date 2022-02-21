#pragma once
#include "CoreMinimal.h"
#include "FindOrCreateLeaderboardDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFindOrCreateLeaderboardDelegate, bool, bSuccessful, const FString&, Content);

