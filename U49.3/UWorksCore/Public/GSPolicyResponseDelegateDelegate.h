#pragma once
#include "CoreMinimal.h"
#include "GSPolicyResponseDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSPolicyResponseDelegate, int32, Secure);

