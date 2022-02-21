#pragma once
#include "CoreMinimal.h"
#include "DeleteSessionBatchMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FDeleteSessionBatchMinimalDelegate, bool, bSuccessful, const FString&, Content);

