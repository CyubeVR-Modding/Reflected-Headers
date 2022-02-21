#pragma once
#include "CoreMinimal.h"
#include "GetAccountListMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAccountListMinimalDelegate, bool, bSuccessful, const FString&, Content);

