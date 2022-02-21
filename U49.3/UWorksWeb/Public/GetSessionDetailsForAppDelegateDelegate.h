#pragma once
#include "CoreMinimal.h"
#include "GetSessionDetailsForAppDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetSessionDetailsForAppDelegate, bool, bSuccessful, const FString&, Content);

