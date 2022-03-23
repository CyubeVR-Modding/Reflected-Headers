#pragma once
#include "CoreMinimal.h"
#include "ESocialRelationship.generated.h"

UENUM()
enum class ESocialRelationship {
    Any,
    FriendInviteReceived,
    FriendInviteSent,
    PartyInvite,
    Friend,
    BlockedPlayer,
    SuggestedFriend,
    RecentPlayer,
};

