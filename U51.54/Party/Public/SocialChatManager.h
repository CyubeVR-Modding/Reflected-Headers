#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SocialChatManager.generated.h"

class USocialUser;
class USocialPrivateMessageChannel;
class USocialReadOnlyChatChannel;
class USocialChatRoom;
class USocialGroupChannel;

UCLASS(Blueprintable, Config=Game, Within=SocialToolkit)
class PARTY_API USocialChatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<TWeakObjectPtr<USocialUser>, USocialPrivateMessageChannel*> DirectChannelsByTargetUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USocialChatRoom*> ChatRoomsById;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableChatSlashCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, USocialGroupChannel*> GroupChannels;
    
public:
    USocialChatManager();
};

