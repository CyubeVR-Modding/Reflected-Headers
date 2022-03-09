#pragma once
#include "CoreMinimal.h"
#include "PartyReservation.h"
#include "OnlineBeaconClient.h"
#include "EClientRequestType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "EPartyReservationResult.h"
#include "PartyBeaconClient.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API APartyBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString DestSessionId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPartyReservation PendingReservation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EClientRequestType RequestType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bPendingReservationSent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCancelReservation;
    
public:
    APartyBeaconClient();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateReservationRequest(const FString& SessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReservationRequest(const FString& SessionId, const FPartyReservation& Reservation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveMemberFromReservationRequest(const FString& SessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationFull();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
};

