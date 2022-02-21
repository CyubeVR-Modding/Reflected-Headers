#pragma once
#include "CoreMinimal.h"
#include "StartSecureMultiplayerSessionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStartSecureMultiplayerSessionDelegate, bool, bSuccessful, const FString&, Content);

