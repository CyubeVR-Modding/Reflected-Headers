#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "SetPersonaNameMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FSetPersonaNameMinimalDelegate, bool, bSuccessful, bool, bSuccess, bool, bLocalSuccess, EUWorksResult, Result);

