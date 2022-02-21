#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "AssociateWithClanMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAssociateWithClanMinimalDelegate, bool, bSuccessful, EUWorksResult, Result);

