#pragma once
#include "CoreMinimal.h"
#include "OnlinePartyRepDataBase.h"
#include "UserPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ECrossplayPreference.h"
#include "PartyMemberRepData.generated.h"

USTRUCT(BlueprintType)
struct PARTY_API FPartyMemberRepData : public FOnlinePartyRepDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlatformUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrossplayPreference CrossplayPreference;
    
public:
    FPartyMemberRepData();
};

