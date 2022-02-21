#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksChatRoomEnterResponse.h"
#include "JoinClanChatRoomMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FJoinClanChatRoomMinimalDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDClanChat, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

