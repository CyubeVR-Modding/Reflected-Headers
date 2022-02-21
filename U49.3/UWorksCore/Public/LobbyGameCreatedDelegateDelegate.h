#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "LobbyGameCreatedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLobbyGameCreatedDelegate, FUWorksSteamID, SteamIDLobby, FUWorksSteamID, SteamIDGameServer, const FString&, IP, int32, Port);

