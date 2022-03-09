#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialPlatformDescription.h"
#include "SocialSettings.generated.h"

UCLASS(Config=Game)
class PARTY_API USocialSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FName> OssNamesWithEnvironmentIdPrefix;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 DefaultMaxPartySize;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bPreferPlatformInvites;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bMustSendPrimaryInvites;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bLeavePartyOnDisconnect;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bSetDesiredPrivacyOnLocalPlayerBecomesLeader;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float UserListAutoUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 MinNicknameLength;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 MaxNicknameLength;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FSocialPlatformDescription> SocialPlatformDescriptions;
    
public:
    USocialSettings();
};

