#pragma once
#include "CoreMinimal.h"
#include "GetAppPriceInfoDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAppPriceInfoDelegate, bool, bSuccessful, const FString&, Content);

