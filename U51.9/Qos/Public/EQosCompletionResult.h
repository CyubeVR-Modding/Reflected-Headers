#pragma once
#include "CoreMinimal.h"
#include "EQosCompletionResult.generated.h"

UENUM()
enum class EQosCompletionResult : uint8 {
    Invalid,
    Success,
    Failure,
    Canceled,
};

