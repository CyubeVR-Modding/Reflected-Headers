#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SocialParty.generated.h"

class UPartyMember;
class APartyBeaconClient;
class ASpectatorBeaconClient;

UCLASS(Abstract, Transient, Config=Game, Within=SocialManager)
class PARTY_API USocialParty : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSubclassOf<APartyBeaconClient> ReservationBeaconClientClass;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatorBeaconClient> SpectatorBeaconClientClass;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl OwningLocalUserId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl CurrentLeaderId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, UPartyMember*> PartyMembersById;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bEnableAutomaticPartyRejoin;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    APartyBeaconClient* ReservationBeaconClient;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ASpectatorBeaconClient* SpectatorBeaconClient;
    
public:
    USocialParty();
};

