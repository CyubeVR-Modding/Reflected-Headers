#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GSClientGroupStatusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGSClientGroupStatusDelegate, FUWorksSteamID, SteamIDUser, FUWorksSteamID, SteamIDGroup, bool, bMember, bool, bOfficer);

