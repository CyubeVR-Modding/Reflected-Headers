#pragma once
#include "CoreMinimal.h"
#include "GetSessionDetailsForAppMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetSessionDetailsForAppMinimalDelegate, bool, bSuccessful, const FString&, Content);

