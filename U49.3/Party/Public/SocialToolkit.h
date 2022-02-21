#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialToolkit.generated.h"

class USocialUser;
class ULocalPlayer;
class USocialChatManager;

UCLASS(Within=SocialManager)
class PARTY_API USocialToolkit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USocialUser* LocalUser;
    
    UPROPERTY()
    TArray<USocialUser*> AllUsers;
    
    UPROPERTY()
    ULocalPlayer* LocalPlayerOwner;
    
    UPROPERTY()
    USocialChatManager* SocialChatManager;
    
public:
    USocialToolkit();
};

