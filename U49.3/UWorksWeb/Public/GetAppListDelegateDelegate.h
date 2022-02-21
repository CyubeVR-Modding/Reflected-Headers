#pragma once
#include "CoreMinimal.h"
#include "GetAppListDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAppListDelegate, bool, bSuccessful, const FString&, Content);

