#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "LobbyKickedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyKickedDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDAdmin, bool, bKickedDueToDisconnect);

