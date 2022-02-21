#pragma once
#include "CoreMinimal.h"
#include "SetBanStatusMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FSetBanStatusMinimalDelegate, bool, bSuccessful, const FString&, Content);

