#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatRoomEnterResponse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "LobbyEnterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLobbyEnterDelegate, FUWorksSteamID, SteamIDLobby, bool, bLocked, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

