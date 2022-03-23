#pragma once
#include "CoreMinimal.h"
#include "SocialChatChannelConfig.generated.h"

class USocialUser;
class USocialChatChannel;

USTRUCT()
struct FSocialChatChannelConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USocialUser* SocialUser;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<USocialChatChannel*> ListenChannels;
    
    PARTY_API FSocialChatChannelConfig();
};

