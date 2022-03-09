#pragma once
#include "CoreMinimal.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFindOrCreateLeaderboardMinimalDelegate, bool, bSuccessful, const FString&, Content);

