#pragma once
#include "CoreMinimal.h"
#include "DownloadClanActivityCountsMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FDownloadClanActivityCountsMinimalDelegate, bool, bSuccessful, bool, bSuccess);

