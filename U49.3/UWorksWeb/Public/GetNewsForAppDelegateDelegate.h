#pragma once
#include "CoreMinimal.h"
#include "GetNewsForAppDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetNewsForAppDelegate, bool, bSuccessful, const FString&, Content);

