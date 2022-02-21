#pragma once
#include "CoreMinimal.h"
#include "AdjustAgreementMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FAdjustAgreementMinimalDelegate, bool, bSuccessful, const FString&, Content);

