#pragma once
#include "CoreMinimal.h"
#include "ProcessAgreementMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FProcessAgreementMinimalDelegate, bool, bSuccessful, const FString&, Content);

