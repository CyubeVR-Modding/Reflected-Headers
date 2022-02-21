#pragma once
#include "CoreMinimal.h"
#include "SteamResult.h"
#include "SteamDelegateOnStartStopWorkshopItemsPlaytimeTrackingDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking, FSteamResult, Result);

