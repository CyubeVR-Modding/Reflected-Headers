#pragma once
#include "CoreMinimal.h"
#include "RequestVacStatusForUserDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestVacStatusForUserDelegate, bool, bSuccessful, const FString&, Content);

