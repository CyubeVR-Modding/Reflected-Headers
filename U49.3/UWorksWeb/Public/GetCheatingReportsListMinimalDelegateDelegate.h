#pragma once
#include "CoreMinimal.h"
#include "GetCheatingReportsListMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetCheatingReportsListMinimalDelegate, bool, bSuccessful, const FString&, Content);

