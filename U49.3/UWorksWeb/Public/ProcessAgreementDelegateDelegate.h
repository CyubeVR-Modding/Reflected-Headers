#pragma once
#include "CoreMinimal.h"
#include "ProcessAgreementDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProcessAgreementDelegate, bool, bSuccessful, const FString&, Content);

