#pragma once
#include "CoreMinimal.h"
#include "GetAppPriceInfoMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAppPriceInfoMinimalDelegate, bool, bSuccessful, const FString&, Content);

