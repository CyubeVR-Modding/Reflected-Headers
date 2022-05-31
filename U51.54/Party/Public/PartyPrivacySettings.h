#pragma once
#include "CoreMinimal.h"
#include "EPartyType.h"
#include "EPartyInviteRestriction.h"
#include "PartyPrivacySettings.generated.h"

USTRUCT(BlueprintType)
struct FPartyPrivacySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyType PartyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyInviteRestriction PartyInviteRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyLeaderFriendsCanJoin;
    
    PARTY_API FPartyPrivacySettings();
};

