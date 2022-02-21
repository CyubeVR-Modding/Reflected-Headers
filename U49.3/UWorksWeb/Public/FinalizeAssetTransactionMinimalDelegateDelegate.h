#pragma once
#include "CoreMinimal.h"
#include "FinalizeAssetTransactionMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FFinalizeAssetTransactionMinimalDelegate, bool, bSuccessful, const FString&, Content);

