#pragma once
#include "CoreMinimal.h"
#include "GetUserAgreementInfoMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetUserAgreementInfoMinimalDelegate, bool, bSuccessful, const FString&, Content);

