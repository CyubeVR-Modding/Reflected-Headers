#pragma once
#include "CoreMinimal.h"
#include "SetItemPaymentRulesDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetItemPaymentRulesDelegate, bool, bSuccessful, const FString&, Content);

