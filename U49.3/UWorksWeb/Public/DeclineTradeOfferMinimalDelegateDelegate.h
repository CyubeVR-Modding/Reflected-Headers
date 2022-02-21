#pragma once
#include "CoreMinimal.h"
#include "DeclineTradeOfferMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FDeclineTradeOfferMinimalDelegate, bool, bSuccessful, const FString&, Content);

