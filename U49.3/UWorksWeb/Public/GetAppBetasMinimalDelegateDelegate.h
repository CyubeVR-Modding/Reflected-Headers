#pragma once
#include "CoreMinimal.h"
#include "GetAppBetasMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAppBetasMinimalDelegate, bool, bSuccessful, const FString&, Content);

