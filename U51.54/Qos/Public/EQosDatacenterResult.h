#pragma once
#include "CoreMinimal.h"
#include "EQosDatacenterResult.generated.h"

UENUM(BlueprintType)
enum class EQosDatacenterResult : uint8 {
    Invalid,
    Success,
    Incomplete,
};

