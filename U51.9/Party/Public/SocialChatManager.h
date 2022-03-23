#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SocialChatManager.generated.h"

class USocialGroupChannel;
class USocialUser;
class USocialPrivateMessageChannel;
class USocialChatRoom;
class USocialReadOnlyChatChannel;

UCLASS(Config=Game, Within=SocialToolkit)
class PARTY_API USocialChatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<USocialUser>, USocialPrivateMessageChannel*> DirectChannelsByTargetUser;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FString, USocialChatRoom*> ChatRoomsById;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FString, USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bEnableChatSlashCommands;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, USocialGroupChannel*> GroupChannels;
    
public:
    USocialChatManager();
};

