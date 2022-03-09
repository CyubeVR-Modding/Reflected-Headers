#pragma once
#include "CoreMinimal.h"
#include "ECrossplayPreference.generated.h"

UENUM()
enum class ECrossplayPreference : uint8 {
    NoSelection,
    OptedIn,
    OptedOut,
    OptedOutRestricted,
};

