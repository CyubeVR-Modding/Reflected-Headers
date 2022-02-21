#pragma once
#include "CoreMinimal.h"
#include "ConsolidateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FConsolidateDelegate, bool, bSuccessful, const FString&, Content);

