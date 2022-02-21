#pragma once
#include "CoreMinimal.h"
#include "EUWorksFavoriteFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "FavoritesListChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FFavoritesListChangedDelegate, const FString&, IP, int32, QueryPort, int32, ConnectionPort, int32, AppID, const TArray<EUWorksFavoriteFlags>&, Flags, bool, bAdd, FUWorksSteamID, SteamID);

