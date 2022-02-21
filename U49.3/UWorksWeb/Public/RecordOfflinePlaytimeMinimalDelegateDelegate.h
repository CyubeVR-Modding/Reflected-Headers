#pragma once
#include "CoreMinimal.h"
#include "RecordOfflinePlaytimeMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FRecordOfflinePlaytimeMinimalDelegate, bool, bSuccessful, const FString&, Content);

