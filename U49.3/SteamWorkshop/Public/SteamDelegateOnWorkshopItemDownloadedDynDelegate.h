#pragma once
#include "CoreMinimal.h"
#include "DownloadItemResult.h"
#include "SteamDelegateOnWorkshopItemDownloadedDynDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FSteamDelegateOnWorkshopItemDownloadedDyn, FDownloadItemResult, Result);

