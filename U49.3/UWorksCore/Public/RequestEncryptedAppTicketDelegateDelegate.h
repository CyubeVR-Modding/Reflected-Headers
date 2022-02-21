#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
#include "RequestEncryptedAppTicketDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestEncryptedAppTicketDelegate, bool, bSuccessful, EUWorksResult, Result);

