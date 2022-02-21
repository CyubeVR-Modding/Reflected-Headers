#pragma once
#include "CoreMinimal.h"
#include "GetFriendListMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetFriendListMinimalDelegate, bool, bSuccessful, const FString&, Content);

