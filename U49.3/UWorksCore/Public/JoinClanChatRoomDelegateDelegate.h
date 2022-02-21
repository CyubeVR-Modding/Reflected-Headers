#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksChatRoomEnterResponse.h"
#include "JoinClanChatRoomDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FJoinClanChatRoomDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDClanChat, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

