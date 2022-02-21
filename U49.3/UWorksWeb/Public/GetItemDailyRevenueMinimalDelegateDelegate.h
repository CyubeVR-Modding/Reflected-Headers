#pragma once
#include "CoreMinimal.h"
#include "GetItemDailyRevenueMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetItemDailyRevenueMinimalDelegate, bool, bSuccessful, const FString&, Content);

