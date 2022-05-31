#pragma once
#include "CoreMinimal.h"
#include "EIplDirectOcclusionMethod.generated.h"

UENUM(BlueprintType)
enum class EIplDirectOcclusionMethod : uint8 {
    RAYCAST,
    VOLUMETRIC,
};

