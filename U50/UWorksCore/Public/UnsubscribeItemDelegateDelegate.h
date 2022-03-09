#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "UnsubscribeItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FUnsubscribeItemDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksPublishedFileID, PublishedFileID);

