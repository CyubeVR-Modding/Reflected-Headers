#pragma once
#include "CoreMinimal.h"
#include "SteamResult.h"
#include "SteamDelegateOnStopWorkshopPlaytimeTrackingAllItemsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnStopWorkshopPlaytimeTrackingAllItems, FSteamResult, Result);

