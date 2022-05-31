#pragma once
#include "CoreMinimal.h"
#include "EPlatformIconDisplayRule.generated.h"

UENUM(BlueprintType)
enum class EPlatformIconDisplayRule : uint8 {
    Always,
    AlwaysIfDifferent,
    AlwaysWhenInCrossplayParty,
    AlwaysIfDifferentWhenInCrossplayParty,
    Never,
};

