#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksPersonaChange.h"
#include "PersonaStateChangeDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPersonaStateChangeDelegate, FUWorksSteamID, SteamID, const TArray<EUWorksPersonaChange>&, ChangeFlags);

