#pragma once
#include "CoreMinimal.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FFindOrCreateLeaderboardMinimalDelegate, bool, bSuccessful, const FString&, Content);

