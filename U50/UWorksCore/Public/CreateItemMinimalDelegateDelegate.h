#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "CreateItemMinimalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FCreateItemMinimalDelegate, bool, bSuccessful, EUWorksResult, Result, FUWorksPublishedFileID, PublishedFileID, bool, bUserNeedsToAcceptWorkshopLegalAgreement);

