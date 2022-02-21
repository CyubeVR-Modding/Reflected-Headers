#pragma once
#include "CoreMinimal.h"
#include "SteamDelegateOnGameOverlayActivatedDynMultiDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSteamDelegateOnGameOverlayActivatedDynMulti, bool, bActive);

