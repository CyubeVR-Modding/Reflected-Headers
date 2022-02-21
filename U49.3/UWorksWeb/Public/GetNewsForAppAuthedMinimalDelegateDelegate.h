#pragma once
#include "CoreMinimal.h"
#include "GetNewsForAppAuthedMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetNewsForAppAuthedMinimalDelegate, bool, bSuccessful, const FString&, Content);

