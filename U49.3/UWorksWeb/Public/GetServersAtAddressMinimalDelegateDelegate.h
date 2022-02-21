#pragma once
#include "CoreMinimal.h"
#include "GetServersAtAddressMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetServersAtAddressMinimalDelegate, bool, bSuccessful, const FString&, Content);

