#pragma once
#include "CoreMinimal.h"
#include "EHotfixResult.generated.h"

UENUM()
enum class EHotfixResult : uint8 {
    Failed,
    Success,
    SuccessNoChange,
    SuccessNeedsReload,
    SuccessNeedsRelaunch,
};

