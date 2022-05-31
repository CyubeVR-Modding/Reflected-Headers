#pragma once
#include "CoreMinimal.h"
#include "ESocialChannelType.generated.h"

UENUM(BlueprintType)
enum class ESocialChannelType : uint8 {
    General,
    Founder,
    Party,
    Team,
    System,
    Private,
};

