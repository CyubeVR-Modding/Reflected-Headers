#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingForAllItemsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStopPlaytimeTrackingForAllItemsDelegate, bool, bSuccessful, EUWorksResult, Result);

