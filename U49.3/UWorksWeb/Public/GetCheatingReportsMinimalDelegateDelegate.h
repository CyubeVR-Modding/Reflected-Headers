#pragma once
#include "CoreMinimal.h"
#include "GetCheatingReportsMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetCheatingReportsMinimalDelegate, bool, bSuccessful, const FString&, Content);

