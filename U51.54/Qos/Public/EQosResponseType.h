#pragma once
#include "CoreMinimal.h"
#include "EQosResponseType.generated.h"

UENUM(BlueprintType)
enum class EQosResponseType : uint8 {
    NoResponse,
    Success,
    Failure,
};

