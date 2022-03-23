#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksChatRoomEnterResponse.h"
#include "JoinLobbyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FJoinLobbyDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDLobby, const TArray<uint8>&, ChatPermissions, bool, bLocked, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

