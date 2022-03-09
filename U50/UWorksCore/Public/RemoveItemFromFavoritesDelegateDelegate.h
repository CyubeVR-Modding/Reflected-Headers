#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "RemoveItemFromFavoritesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRemoveItemFromFavoritesDelegate, bool, bSuccessful, FUWorksPublishedFileID, PublishedFileID, EUWorksResult, Result, bool, bWasAddRequest);

