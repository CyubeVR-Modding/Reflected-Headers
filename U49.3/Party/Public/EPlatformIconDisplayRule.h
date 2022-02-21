#pragma once
#include "CoreMinimal.h"
#include "EPlatformIconDisplayRule.generated.h"

UENUM()
enum class EPlatformIconDisplayRule {
    Always,
    AlwaysIfDifferent,
    AlwaysWhenInCrossplayParty,
    AlwaysIfDifferentWhenInCrossplayParty,
    Never,
};

