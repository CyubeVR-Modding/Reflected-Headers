#pragma once
#include "CoreMinimal.h"
#include "EPartyInviteRestriction.generated.h"

UENUM()
enum class EPartyInviteRestriction : uint8 {
    AnyMember,
    LeaderOnly,
    NoInvites,
};

