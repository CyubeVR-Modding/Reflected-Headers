#pragma once
#include "CoreMinimal.h"
#include "ResetLoginTokenDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResetLoginTokenDelegate, bool, bSuccessful, const FString&, Content);

