#pragma once
#include "CoreMinimal.h"
#include "FlushInventoryCacheDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlushInventoryCacheDelegate, bool, bSuccessful, const FString&, Content);

