#pragma once
#include "CoreMinimal.h"
#include "SocialChatChannel.h"
#include "SocialChatRoom.generated.h"

UCLASS(Blueprintable)
class PARTY_API USocialChatRoom : public USocialChatChannel {
    GENERATED_BODY()
public:
    USocialChatRoom();
};

