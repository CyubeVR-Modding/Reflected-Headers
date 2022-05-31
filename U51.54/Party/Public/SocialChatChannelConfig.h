#pragma once
#include "CoreMinimal.h"
#include "SocialChatChannelConfig.generated.h"

class USocialUser;
class USocialChatChannel;

USTRUCT(BlueprintType)
struct FSocialChatChannelConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialUser* SocialUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USocialChatChannel*> ListenChannels;
    
    PARTY_API FSocialChatChannelConfig();
};

