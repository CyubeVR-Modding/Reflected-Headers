#pragma once
#include "CoreMinimal.h"
#include "EQosResponseType.generated.h"

UENUM()
enum class EQosResponseType : uint8 {
    NoResponse,
    Success,
    Failure,
};

