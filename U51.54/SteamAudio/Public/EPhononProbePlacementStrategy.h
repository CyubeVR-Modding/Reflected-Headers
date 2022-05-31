#pragma once
#include "CoreMinimal.h"
#include "EPhononProbePlacementStrategy.generated.h"

UENUM(BlueprintType)
enum class EPhononProbePlacementStrategy : uint8 {
    CENTROID,
    UNIFORM_FLOOR,
};

