#pragma once
#include "CoreMinimal.h"
#include "EIplRayTracerType.generated.h"

UENUM()
enum class EIplRayTracerType : uint8 {
    PHONON,
    EMBREE,
    RADEONRAYS,
};

