#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCUpdateHandle -FallbackName=SteamUGCUpdateHandle
#include "SteamDelegateOnUpdateWorkshopItemStartedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FSteamDelegateOnUpdateWorkshopItemStarted, FSteamUGCUpdateHandle, updateHandle);

