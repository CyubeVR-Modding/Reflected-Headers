#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatRoomEnterResponse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "JoinClanChatRoomMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FJoinClanChatRoomMinimalDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDClanChat, EUWorksChatRoomEnterResponse, ChatRoomEnterResponse);

