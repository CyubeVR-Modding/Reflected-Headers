#pragma once
#include "CoreMinimal.h"
#include "DeleteAccountDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDeleteAccountDelegate, bool, bSuccessful, const FString&, Content);

