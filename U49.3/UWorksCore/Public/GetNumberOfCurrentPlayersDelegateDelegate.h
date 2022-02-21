#pragma once
#include "CoreMinimal.h"
#include "GetNumberOfCurrentPlayersDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGetNumberOfCurrentPlayersDelegate, bool, bSuccessful, bool, bSuccess, int32, Players);

