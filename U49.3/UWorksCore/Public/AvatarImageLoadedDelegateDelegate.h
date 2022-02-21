#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "AvatarImageLoadedDelegateDelegate.generated.h"

class UTexture2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAvatarImageLoadedDelegate, FUWorksSteamID, SteamID, UTexture2D*, Image);

