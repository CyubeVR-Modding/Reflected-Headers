#pragma once
#include "CoreMinimal.h"
#include "SetMemoDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetMemoDelegate, bool, bSuccessful, const FString&, Content);

