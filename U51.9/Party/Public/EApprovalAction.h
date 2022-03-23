#pragma once
#include "CoreMinimal.h"
#include "EApprovalAction.generated.h"

UENUM()
enum class EApprovalAction {
    Approve,
    Enqueue,
    EnqueueAndStartBeacon,
    Deny,
};

