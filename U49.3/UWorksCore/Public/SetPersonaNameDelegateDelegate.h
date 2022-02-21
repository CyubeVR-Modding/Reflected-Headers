#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "SetPersonaNameDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSetPersonaNameDelegate, bool, bSuccessful, bool, bSuccess, bool, bLocalSuccess, EUWorksResult, Result);

