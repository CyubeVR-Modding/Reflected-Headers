#pragma once
#include "CoreMinimal.h"
#include "EIplHrtfInterpolationMethod.generated.h"

UENUM()
enum class EIplHrtfInterpolationMethod : uint8 {
    NEAREST,
    BILINEAR,
};

