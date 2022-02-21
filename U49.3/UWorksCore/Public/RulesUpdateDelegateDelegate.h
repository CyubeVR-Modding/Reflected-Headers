#pragma once
#include "CoreMinimal.h"
#include "UWorksRuleInfo.h"
#include "RulesUpdateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRulesUpdateDelegate, bool, bSuccessful, FUWorksRuleInfo, Rule);

