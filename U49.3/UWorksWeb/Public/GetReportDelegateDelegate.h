#pragma once
#include "CoreMinimal.h"
#include "GetReportDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetReportDelegate, bool, bSuccessful, const FString&, Content);

