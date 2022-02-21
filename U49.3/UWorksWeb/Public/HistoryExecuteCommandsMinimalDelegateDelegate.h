#pragma once
#include "CoreMinimal.h"
#include "HistoryExecuteCommandsMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FHistoryExecuteCommandsMinimalDelegate, bool, bSuccessful, const FString&, Content);

