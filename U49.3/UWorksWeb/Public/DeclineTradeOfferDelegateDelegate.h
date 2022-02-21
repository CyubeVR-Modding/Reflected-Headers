#pragma once
#include "CoreMinimal.h"
#include "DeclineTradeOfferDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeclineTradeOfferDelegate, bool, bSuccessful, const FString&, Content);

