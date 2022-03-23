#pragma once
#include "CoreMinimal.h"
#include "OnlinePartyRepDataBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "UserPlatform.h"
#include "ECrossplayPreference.h"
#include "PartyMemberRepData.generated.h"

USTRUCT()
struct PARTY_API FPartyMemberRepData : public FOnlinePartyRepDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUserPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlatformUniqueId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString PlatformSessionId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ECrossplayPreference CrossplayPreference;
    
public:
    FPartyMemberRepData();
};

