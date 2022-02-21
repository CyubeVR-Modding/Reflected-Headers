#pragma once
#include "CoreMinimal.h"
#include "FlushContextCacheMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FFlushContextCacheMinimalDelegate, bool, bSuccessful, const FString&, Content);

