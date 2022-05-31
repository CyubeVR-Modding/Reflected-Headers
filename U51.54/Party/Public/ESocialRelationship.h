#pragma once
#include "CoreMinimal.h"
#include "ESocialRelationship.generated.h"

UENUM(BlueprintType)
enum class ESocialRelationship : uint8 {
    Any,
    FriendInviteReceived,
    FriendInviteSent,
    PartyInvite,
    Friend,
    BlockedPlayer,
    SuggestedFriend,
    RecentPlayer,
};

