#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "LobbyInviteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyInviteDelegate, FUWorksSteamID, SteamIDUser, FUWorksSteamID, SteamIDLobby, FUWorksGameID, GameID);

