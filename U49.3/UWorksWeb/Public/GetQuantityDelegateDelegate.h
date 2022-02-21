#pragma once
#include "CoreMinimal.h"
#include "GetQuantityDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetQuantityDelegate, bool, bSuccessful, const FString&, Content);

