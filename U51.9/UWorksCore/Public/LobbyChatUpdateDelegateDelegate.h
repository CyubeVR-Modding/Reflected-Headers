#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksChatMemberStateChange.h"
#include "LobbyChatUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLobbyChatUpdateDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDUserChanged, FUWorksSteamID, SteamIDMakingChange, const TArray<EUWorksChatMemberStateChange>&, ChatMemberStateChange);

