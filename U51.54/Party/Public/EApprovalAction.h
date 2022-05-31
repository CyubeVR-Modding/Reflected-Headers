#pragma once
#include "CoreMinimal.h"
#include "EApprovalAction.generated.h"

UENUM(BlueprintType)
enum class EApprovalAction : uint8 {
    Approve,
    Enqueue,
    EnqueueAndStartBeacon,
    Deny,
};

