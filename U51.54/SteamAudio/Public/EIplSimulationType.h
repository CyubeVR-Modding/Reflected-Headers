#pragma once
#include "CoreMinimal.h"
#include "EIplSimulationType.generated.h"

UENUM(BlueprintType)
enum class EIplSimulationType : uint8 {
    REALTIME,
    BAKED,
    DISABLED,
};

