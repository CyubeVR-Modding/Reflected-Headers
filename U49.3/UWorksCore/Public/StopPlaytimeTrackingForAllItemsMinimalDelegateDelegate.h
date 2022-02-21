#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingForAllItemsMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FStopPlaytimeTrackingForAllItemsMinimalDelegate, bool, bSuccessful, EUWorksResult, Result);

