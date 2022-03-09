#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PartyReservation.h"
#include "PartyBeaconState.generated.h"

UCLASS(NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API UPartyBeaconState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FName SessionName;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NumConsumedReservations;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxReservations;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NumTeams;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NumPlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FName TeamAssignmentMethod;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 ReservedHostTeamNum;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 ForceTeamNum;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bRestrictCrossConsole;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableRemovalRequests;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPartyReservation> Reservations;
    
public:
    UPartyBeaconState();
};

