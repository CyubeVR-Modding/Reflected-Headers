#pragma once
#include "CoreMinimal.h"
#include "SetBanStatusDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetBanStatusDelegate, bool, bSuccessful, const FString&, Content);

