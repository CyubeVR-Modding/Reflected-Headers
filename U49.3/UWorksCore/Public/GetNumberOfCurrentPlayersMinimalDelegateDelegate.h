#pragma once
#include "CoreMinimal.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FGetNumberOfCurrentPlayersMinimalDelegate, bool, bSuccessful, bool, bSuccess, int32, Players);

