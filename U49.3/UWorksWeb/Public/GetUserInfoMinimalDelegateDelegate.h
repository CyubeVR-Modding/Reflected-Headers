#pragma once
#include "CoreMinimal.h"
#include "GetUserInfoMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetUserInfoMinimalDelegate, bool, bSuccessful, const FString&, Content);

