#pragma once
#include "CoreMinimal.h"
#include "ESocialSubsystem.generated.h"

UENUM(BlueprintType)
enum class ESocialSubsystem : uint8 {
    Primary,
    Platform,
    MAX,
};

