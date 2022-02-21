#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GameConnectedClanChatMsgDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameConnectedClanChatMsgDelegate, FUWorksSteamID, SteamIDClanChat, FUWorksSteamID, SteamIDUser, int32, MessageID);

