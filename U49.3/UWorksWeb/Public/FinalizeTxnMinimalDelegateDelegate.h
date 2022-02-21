#pragma once
#include "CoreMinimal.h"
#include "FinalizeTxnMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FFinalizeTxnMinimalDelegate, bool, bSuccessful, const FString&, Content);

