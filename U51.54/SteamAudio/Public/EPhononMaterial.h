#pragma once
#include "CoreMinimal.h"
#include "EPhononMaterial.generated.h"

UENUM(BlueprintType)
enum class EPhononMaterial : uint8 {
    GENERIC,
    BRICK,
    CONCRETE,
    CERAMIC,
    GRAVEL,
    CARPET,
    GLASS,
    PLASTER,
    WOOD,
    METAL,
    ROCK,
    CUSTOM,
};

