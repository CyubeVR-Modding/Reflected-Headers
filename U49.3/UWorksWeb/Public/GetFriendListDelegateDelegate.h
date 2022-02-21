#pragma once
#include "CoreMinimal.h"
#include "GetFriendListDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetFriendListDelegate, bool, bSuccessful, const FString&, Content);

