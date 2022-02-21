#pragma once
#include "CoreMinimal.h"
#include "SetUGCUsedByGCDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetUGCUsedByGCDelegate, bool, bSuccessful, const FString&, Content);

