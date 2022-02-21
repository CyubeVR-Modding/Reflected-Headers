#pragma once
#include "CoreMinimal.h"
#include "AuthenticateUserTicketDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAuthenticateUserTicketDelegate, bool, bSuccessful, const FString&, Content);

