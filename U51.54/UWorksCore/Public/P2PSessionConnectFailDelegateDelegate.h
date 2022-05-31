#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksP2PSessionError.h"
#include "P2PSessionConnectFailDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FP2PSessionConnectFailDelegate, FUWorksSteamID, SteamIDRemote, EUWorksP2PSessionError, P2PSessionError);

