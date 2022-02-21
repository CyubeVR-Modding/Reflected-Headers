#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksChatRoomEnterResponse.h"
#include "LobbyEnterDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyEnterDelegate, FUWorksSteamID, SteamIDLobby, bool, bLocked, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

