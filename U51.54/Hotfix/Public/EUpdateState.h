#pragma once
#include "CoreMinimal.h"
#include "EUpdateState.generated.h"

UENUM(BlueprintType)
enum class EUpdateState : uint8 {
    UpdateIdle,
    UpdatePending,
    CheckingForPatch,
    DetectingPlatformEnvironment,
    CheckingForHotfix,
    WaitingOnInitialLoad,
    InitialLoadComplete,
    UpdateComplete,
};

