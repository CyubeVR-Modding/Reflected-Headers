#pragma once
#include "CoreMinimal.h"
#include "RequestPlayerGameBanDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestPlayerGameBanDelegate, bool, bSuccessful, const FString&, Content);

