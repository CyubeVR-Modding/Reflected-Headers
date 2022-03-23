#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialToolkit.generated.h"

class ULocalPlayer;
class USocialUser;
class USocialChatManager;

UCLASS(Within=SocialManager)
class PARTY_API USocialToolkit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USocialUser* LocalUser;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<USocialUser*> AllUsers;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ULocalPlayer* LocalPlayerOwner;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USocialChatManager* SocialChatManager;
    
public:
    USocialToolkit();
};

