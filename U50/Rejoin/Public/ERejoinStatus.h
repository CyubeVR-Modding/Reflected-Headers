#pragma once
#include "CoreMinimal.h"
#include "ERejoinStatus.generated.h"

UENUM()
enum class ERejoinStatus : uint8 {
    NoMatchToRejoin,
    RejoinAvailable,
    UpdatingStatus,
    NeedsRecheck,
    NoMatchToRejoin_MatchEnded,
};

