#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "RequestClanOfficerListMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FRequestClanOfficerListMinimalDelegate, bool, bSuccessful, FUWorksSteamID, SteamIDClan, int32, Officers, bool, bSuccess);

