#pragma once
#include "CoreMinimal.h"
#include "CreateAccountDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCreateAccountDelegate, bool, bSuccessful, const FString&, Content);

