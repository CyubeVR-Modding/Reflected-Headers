#pragma once
#include "CoreMinimal.h"
#include "SteamAppUninstalledDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamAppUninstalledDelegate, int32, AppID);

