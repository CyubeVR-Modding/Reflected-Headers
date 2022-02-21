#pragma once
#include "CoreMinimal.h"
#include "ConsolidateMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FConsolidateMinimalDelegate, bool, bSuccessful, const FString&, Content);

