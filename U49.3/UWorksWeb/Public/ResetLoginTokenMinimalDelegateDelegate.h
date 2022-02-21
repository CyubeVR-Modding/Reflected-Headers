#pragma once
#include "CoreMinimal.h"
#include "ResetLoginTokenMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FResetLoginTokenMinimalDelegate, bool, bSuccessful, const FString&, Content);

