#pragma once
#include "CoreMinimal.h"
#include "GetLeaderboardEntriesMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetLeaderboardEntriesMinimalDelegate, bool, bSuccessful, const FString&, Content);

