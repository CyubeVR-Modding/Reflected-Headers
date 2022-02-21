#pragma once
#include "CoreMinimal.h"
#include "RankedByTrendMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FRankedByTrendMinimalDelegate, bool, bSuccessful, const FString&, Content);

