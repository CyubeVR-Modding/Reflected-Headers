#pragma once
#include "CoreMinimal.h"
#include "GetOwnedGamesMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetOwnedGamesMinimalDelegate, bool, bSuccessful, const FString&, Content);

