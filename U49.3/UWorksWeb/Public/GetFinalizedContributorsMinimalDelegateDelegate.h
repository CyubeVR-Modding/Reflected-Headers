#pragma once
#include "CoreMinimal.h"
#include "GetFinalizedContributorsMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetFinalizedContributorsMinimalDelegate, bool, bSuccessful, const FString&, Content);

