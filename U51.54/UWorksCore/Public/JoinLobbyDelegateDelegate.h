#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatRoomEnterResponse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "JoinLobbyDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FJoinLobbyDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDLobby, const TArray<uint8>&, ChatPermissions, bool, bLocked, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

