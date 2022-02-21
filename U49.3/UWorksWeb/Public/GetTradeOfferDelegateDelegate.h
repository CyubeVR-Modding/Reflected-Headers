#pragma once
#include "CoreMinimal.h"
#include "GetTradeOfferDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetTradeOfferDelegate, bool, bSuccessful, const FString&, Content);

