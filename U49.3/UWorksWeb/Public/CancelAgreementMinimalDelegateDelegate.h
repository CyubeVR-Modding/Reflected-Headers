#pragma once
#include "CoreMinimal.h"
#include "CancelAgreementMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FCancelAgreementMinimalDelegate, bool, bSuccessful, const FString&, Content);

