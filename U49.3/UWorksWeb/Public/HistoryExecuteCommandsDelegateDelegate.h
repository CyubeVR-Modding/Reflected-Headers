#pragma once
#include "CoreMinimal.h"
#include "HistoryExecuteCommandsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHistoryExecuteCommandsDelegate, bool, bSuccessful, const FString&, Content);

