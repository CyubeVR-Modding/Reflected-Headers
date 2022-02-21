#pragma once
#include "CoreMinimal.h"
#include "QueryTxnDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQueryTxnDelegate, bool, bSuccessful, const FString&, Content);

