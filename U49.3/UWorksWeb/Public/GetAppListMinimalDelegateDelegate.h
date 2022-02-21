#pragma once
#include "CoreMinimal.h"
#include "GetAppListMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetAppListMinimalDelegate, bool, bSuccessful, const FString&, Content);

