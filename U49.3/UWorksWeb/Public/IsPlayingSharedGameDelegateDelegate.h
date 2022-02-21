#pragma once
#include "CoreMinimal.h"
#include "IsPlayingSharedGameDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIsPlayingSharedGameDelegate, bool, bSuccessful, const FString&, Content);

