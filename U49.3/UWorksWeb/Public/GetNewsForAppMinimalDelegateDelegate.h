#pragma once
#include "CoreMinimal.h"
#include "GetNewsForAppMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetNewsForAppMinimalDelegate, bool, bSuccessful, const FString&, Content);

