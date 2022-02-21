#pragma once
#include "CoreMinimal.h"
#include "FlushContextCacheDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlushContextCacheDelegate, bool, bSuccessful, const FString&, Content);

