#pragma once
#include "CoreMinimal.h"
#include "QueryLoginTokenDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQueryLoginTokenDelegate, bool, bSuccessful, const FString&, Content);

