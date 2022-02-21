#pragma once
#include "CoreMinimal.h"
#include "RefundTxnMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FRefundTxnMinimalDelegate, bool, bSuccessful, const FString&, Content);

