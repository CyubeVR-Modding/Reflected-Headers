#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "ItemInstalledDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemInstalledDelegate, int32, AppID, FUWorksPublishedFileID, PublishedFileID);

