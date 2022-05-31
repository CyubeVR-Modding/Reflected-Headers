#pragma once
#include "CoreMinimal.h"
#include "EQualitySettings.generated.h"

UENUM(BlueprintType)
enum class EQualitySettings : uint8 {
    LOW,
    MEDIUM,
    HIGH,
    CUSTOM,
};

