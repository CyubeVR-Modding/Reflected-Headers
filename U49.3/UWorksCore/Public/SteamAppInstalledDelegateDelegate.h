#pragma once
#include "CoreMinimal.h"
#include "SteamAppInstalledDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamAppInstalledDelegate, int32, AppID);

