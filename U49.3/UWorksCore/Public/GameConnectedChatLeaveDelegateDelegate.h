#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GameConnectedChatLeaveDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGameConnectedChatLeaveDelegate, FUWorksSteamID, SteamIDClanChat, FUWorksSteamID, SteamIDUser, bool, bKicked, bool, bDropped);

