#pragma once
#include "CoreMinimal.h"
#include "EPartyInviteRestriction.generated.h"

UENUM(BlueprintType)
enum class EPartyInviteRestriction : uint8 {
    AnyMember,
    LeaderOnly,
    NoInvites,
};

