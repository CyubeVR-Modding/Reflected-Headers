#pragma once
#include "CoreMinimal.h"
#include "GetHistoryCommandDetailsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetHistoryCommandDetailsDelegate, bool, bSuccessful, const FString&, Content);

