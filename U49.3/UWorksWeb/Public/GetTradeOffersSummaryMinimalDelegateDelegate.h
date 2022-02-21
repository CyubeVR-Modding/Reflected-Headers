#pragma once
#include "CoreMinimal.h"
#include "GetTradeOffersSummaryMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetTradeOffersSummaryMinimalDelegate, bool, bSuccessful, const FString&, Content);

