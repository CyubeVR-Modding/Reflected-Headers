#pragma once
#include "CoreMinimal.h"
#include "CheckAppOwnershipMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FCheckAppOwnershipMinimalDelegate, bool, bSuccessful, const FString&, Content);

