#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "SubmitItemUpdateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSubmitItemUpdateDelegate, bool, bSuccessful, EUWorksResult, Result, bool, bUserNeedsToAcceptWorkshopLegalAgreement);

