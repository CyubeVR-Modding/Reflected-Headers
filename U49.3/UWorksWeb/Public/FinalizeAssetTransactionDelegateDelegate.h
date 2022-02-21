#pragma once
#include "CoreMinimal.h"
#include "FinalizeAssetTransactionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFinalizeAssetTransactionDelegate, bool, bSuccessful, const FString&, Content);

