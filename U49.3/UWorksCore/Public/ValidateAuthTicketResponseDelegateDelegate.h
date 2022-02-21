#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksAuthSessionResponse.h"
#include "ValidateAuthTicketResponseDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FValidateAuthTicketResponseDelegate, FUWorksSteamID, SteamID, EUWorksAuthSessionResponse, AuthSessionResponse, FUWorksSteamID, OwnerSteamID);

