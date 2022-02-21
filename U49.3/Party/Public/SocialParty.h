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
    UPROPERTY()
    TSubclassOf<APartyBeaconClient> ReservationBeaconClientClass;
    
    UPROPERTY()
    TSubclassOf<ASpectatorBeaconClient> SpectatorBeaconClientClass;
    
private:
    UPROPERTY()
    FUniqueNetIdRepl OwningLocalUserId;
    
    UPROPERTY()
    FUniqueNetIdRepl CurrentLeaderId;
    
    UPROPERTY()
    TMap<FUniqueNetIdRepl, UPartyMember*> PartyMembersById;
    
    UPROPERTY(Config)
    bool bEnableAutomaticPartyRejoin;
    
    UPROPERTY()
    APartyBeaconClient* ReservationBeaconClient;
    
    UPROPERTY()
    ASpectatorBeaconClient* SpectatorBeaconClient;
    
public:
    USocialParty();
};

