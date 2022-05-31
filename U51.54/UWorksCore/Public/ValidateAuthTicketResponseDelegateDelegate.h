#pragma once
#include "CoreMinimal.h"
#include "EUWorksAuthSessionResponse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "ValidateAuthTicketResponseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FValidateAuthTicketResponseDelegate, FUWorksSteamID, SteamID, EUWorksAuthSessionResponse, AuthSessionResponse, FUWorksSteamID, OwnerSteamID);

