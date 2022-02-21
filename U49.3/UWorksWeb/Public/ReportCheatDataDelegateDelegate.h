#pragma once
#include "CoreMinimal.h"
#include "ReportCheatDataDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReportCheatDataDelegate, bool, bSuccessful, const FString&, Content);

