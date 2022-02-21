#pragma once
#include "CoreMinimal.h"
#include "GetItemDefsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetItemDefsDelegate, bool, bSuccessful, const FString&, Content);

