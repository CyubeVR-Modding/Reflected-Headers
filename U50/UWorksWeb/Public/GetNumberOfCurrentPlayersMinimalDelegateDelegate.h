#pragma once
#include "CoreMinimal.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetNumberOfCurrentPlayersMinimalDelegate, bool, bSuccessful, const FString&, Content);

