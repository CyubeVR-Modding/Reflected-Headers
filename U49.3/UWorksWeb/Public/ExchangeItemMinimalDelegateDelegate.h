#pragma once
#include "CoreMinimal.h"
#include "ExchangeItemMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FExchangeItemMinimalDelegate, bool, bSuccessful, const FString&, Content);

