#pragma once
#include "CoreMinimal.h"
#include "GetCheatingReportsListDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetCheatingReportsListDelegate, bool, bSuccessful, const FString&, Content);

