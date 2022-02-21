#pragma once
#include "CoreMinimal.h"
#include "GetUGCFileDetailsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetUGCFileDetailsDelegate, bool, bSuccessful, const FString&, Content);

