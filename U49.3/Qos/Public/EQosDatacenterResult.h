#pragma once
#include "CoreMinimal.h"
#include "EQosDatacenterResult.generated.h"

UENUM()
enum class EQosDatacenterResult : uint8 {
    Invalid,
    Success,
    Incomplete,
};

