#pragma once
#include "CoreMinimal.h"
#include "GetPlayersBannedMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetPlayersBannedMinimalDelegate, bool, bSuccessful, const FString&, Content);

