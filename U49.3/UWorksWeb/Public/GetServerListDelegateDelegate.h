#pragma once
#include "CoreMinimal.h"
#include "GetServerListDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetServerListDelegate, bool, bSuccessful, const FString&, Content);

