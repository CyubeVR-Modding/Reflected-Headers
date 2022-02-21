#pragma once
#include "CoreMinimal.h"
#include "EndSecureMultiplayerSessionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndSecureMultiplayerSessionDelegate, bool, bSuccessful, const FString&, Content);

