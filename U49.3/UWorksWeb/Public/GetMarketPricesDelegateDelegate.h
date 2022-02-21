#pragma once
#include "CoreMinimal.h"
#include "GetMarketPricesDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetMarketPricesDelegate, bool, bSuccessful, const FString&, Content);

