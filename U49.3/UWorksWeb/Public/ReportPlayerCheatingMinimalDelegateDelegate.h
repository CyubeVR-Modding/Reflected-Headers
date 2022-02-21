#pragma once
#include "CoreMinimal.h"
#include "ReportPlayerCheatingMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FReportPlayerCheatingMinimalDelegate, bool, bSuccessful, const FString&, Content);

