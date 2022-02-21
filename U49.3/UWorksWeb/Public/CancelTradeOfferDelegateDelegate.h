#pragma once
#include "CoreMinimal.h"
#include "CancelTradeOfferDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCancelTradeOfferDelegate, bool, bSuccessful, const FString&, Content);

