#pragma once
#include "CoreMinimal.h"
#include "CancelAppListingsForUserMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FCancelAppListingsForUserMinimalDelegate, bool, bSuccessful, const FString&, Content);

