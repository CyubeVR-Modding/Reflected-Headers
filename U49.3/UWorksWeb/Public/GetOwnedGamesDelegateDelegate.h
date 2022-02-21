#pragma once
#include "CoreMinimal.h"
#include "GetOwnedGamesDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetOwnedGamesDelegate, bool, bSuccessful, const FString&, Content);

