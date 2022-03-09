#pragma once
#include "CoreMinimal.h"
#include "EPhononProbePlacementStrategy.generated.h"

UENUM()
enum class EPhononProbePlacementStrategy : uint8 {
    CENTROID,
    UNIFORM_FLOOR,
};

