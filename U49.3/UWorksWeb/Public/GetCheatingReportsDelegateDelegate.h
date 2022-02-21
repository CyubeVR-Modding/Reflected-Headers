#pragma once
#include "CoreMinimal.h"
#include "GetCheatingReportsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetCheatingReportsDelegate, bool, bSuccessful, const FString&, Content);

