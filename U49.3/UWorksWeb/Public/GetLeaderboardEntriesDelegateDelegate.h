#pragma once
#include "CoreMinimal.h"
#include "GetLeaderboardEntriesDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetLeaderboardEntriesDelegate, bool, bSuccessful, const FString&, Content);

