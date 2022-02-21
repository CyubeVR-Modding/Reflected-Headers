#pragma once
#include "CoreMinimal.h"
#include "UWorksTicketHandle.h"
#include "EUWorksResult.h"
#include "GetAuthSessionTicketResponseDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAuthSessionTicketResponseDelegate, FUWorksTicketHandle, AuthTicket, EUWorksResult, Result);

