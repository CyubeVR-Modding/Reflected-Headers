#pragma once
#include "CoreMinimal.h"
#include "GetSteamLevelDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetSteamLevelDelegate, bool, bSuccessful, const FString&, Content);

