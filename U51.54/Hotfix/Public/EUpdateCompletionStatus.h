#pragma once
#include "CoreMinimal.h"
#include "EUpdateCompletionStatus.generated.h"

UENUM(BlueprintType)
enum class EUpdateCompletionStatus : uint8 {
    UpdateUnknown,
    UpdateSuccess,
    UpdateSuccess_NoChange,
    UpdateSuccess_NeedsReload,
    UpdateSuccess_NeedsRelaunch,
    UpdateSuccess_NeedsPatch,
    UpdateFailure_PatchCheck,
    UpdateFailure_HotfixCheck,
    UpdateFailure_NotLoggedIn,
};

