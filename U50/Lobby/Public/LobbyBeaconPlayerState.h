#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "LobbyBeaconPlayerState.generated.h"

class AOnlineBeaconClient;

UCLASS(NotPlaceable, Transient, Config=Game)
class LOBBY_API ALobbyBeaconPlayerState : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_UniqueId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UniqueId;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_PartyOwner, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PartyOwnerUniqueId;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_InLobby, meta=(AllowPrivateAccess=true))
    bool bInLobby;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    AOnlineBeaconClient* ClientActor;
    
    ALobbyBeaconPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UniqueId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PartyOwner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InLobby();
    
};

