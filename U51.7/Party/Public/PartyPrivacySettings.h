#pragma once
#include "CoreMinimal.h"
#include "EPartyInviteRestriction.h"
#include "EPartyType.h"
#include "PartyPrivacySettings.generated.h"

USTRUCT()
struct FPartyPrivacySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EPartyType PartyType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EPartyInviteRestriction PartyInviteRestriction;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bOnlyLeaderFriendsCanJoin;
    
    PARTY_API FPartyPrivacySettings();
};

