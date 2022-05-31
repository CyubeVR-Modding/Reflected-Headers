#pragma once
#include "CoreMinimal.h"
#include "SocialChatChannel.h"
#include "SocialReadOnlyChatChannel.generated.h"

UCLASS(Blueprintable)
class PARTY_API USocialReadOnlyChatChannel : public USocialChatChannel {
    GENERATED_BODY()
public:
    USocialReadOnlyChatChannel();
};

