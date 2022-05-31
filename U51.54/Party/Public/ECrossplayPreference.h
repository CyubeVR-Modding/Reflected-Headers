#pragma once
#include "CoreMinimal.h"
#include "ECrossplayPreference.generated.h"

UENUM(BlueprintType)
enum class ECrossplayPreference : uint8 {
    NoSelection,
    OptedIn,
    OptedOut,
    OptedOutRestricted,
};

