#pragma once
#include "CoreMinimal.h"
#include "EQosCompletionResult.generated.h"

UENUM(BlueprintType)
enum class EQosCompletionResult : uint8 {
    Invalid,
    Success,
    Failure,
    Canceled,
};

