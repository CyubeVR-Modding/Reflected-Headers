#pragma once
#include "CoreMinimal.h"
#include "SocialChatRoom.h"
#include "SocialPartyChatRoom.generated.h"

UCLASS(Blueprintable)
class PARTY_API USocialPartyChatRoom : public USocialChatRoom {
    GENERATED_BODY()
public:
    USocialPartyChatRoom();
};

