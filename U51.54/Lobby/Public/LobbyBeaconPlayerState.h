#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "LobbyBeaconPlayerState.generated.h"

class AOnlineBeaconClient;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class LOBBY_API ALobbyBeaconPlayerState : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniqueId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartyOwner, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PartyOwnerUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InLobby, meta=(AllowPrivateAccess=true))
    bool bInLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
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

