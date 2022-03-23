#pragma once
#include "CoreMinimal.h"
#include "OnlinePartyRepDataBase.h"
#include "PartyPrivacySettings.h"
#include "PartyPlatformSessionInfo.h"
#include "PartyRepData.generated.h"

USTRUCT()
struct PARTY_API FPartyRepData : public FOnlinePartyRepDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPartyPrivacySettings PrivacySettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FPartyPlatformSessionInfo> PlatformSessions;
    
public:
    FPartyRepData();
};

