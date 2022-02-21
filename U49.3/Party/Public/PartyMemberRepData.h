#pragma once
#include "CoreMinimal.h"
#include "ECrossplayPreference.h"
#include "OnlinePartyRepDataBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "UserPlatform.h"
#include "PartyMemberRepData.generated.h"

USTRUCT()
struct PARTY_API FPartyMemberRepData : public FOnlinePartyRepDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FUserPlatform Platform;
    
    UPROPERTY()
    FUniqueNetIdRepl PlatformUniqueId;
    
    UPROPERTY()
    FString PlatformSessionId;
    
    UPROPERTY()
    ECrossplayPreference CrossplayPreference;
    
public:
    FPartyMemberRepData();
};

