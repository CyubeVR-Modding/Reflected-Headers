#pragma once
#include "CoreMinimal.h"
#include "GetNewsForAppAuthedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetNewsForAppAuthedDelegate, bool, bSuccessful, const FString&, Content);

