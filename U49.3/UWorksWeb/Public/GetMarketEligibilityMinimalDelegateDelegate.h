#pragma once
#include "CoreMinimal.h"
#include "GetMarketEligibilityMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetMarketEligibilityMinimalDelegate, bool, bSuccessful, const FString&, Content);

