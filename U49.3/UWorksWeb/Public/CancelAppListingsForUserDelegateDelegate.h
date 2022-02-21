#pragma once
#include "CoreMinimal.h"
#include "CancelAppListingsForUserDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCancelAppListingsForUserDelegate, bool, bSuccessful, const FString&, Content);

