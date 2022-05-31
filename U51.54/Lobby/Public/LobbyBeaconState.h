#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "LobbyPlayerStateInfoArray.h"
#include "LobbyBeaconState.generated.h"

class ALobbyBeaconPlayerState;

UCLASS(Blueprintable, NotPlaceable, Transient, Config=Game)
class LOBBY_API ALobbyBeaconState : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALobbyBeaconPlayerState> LobbyBeaconPlayerStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyStarted, meta=(AllowPrivateAccess=true))
    bool bLobbyStarted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, ReplicatedUsing=OnRep_WaitForPlayersTimeRemaining, meta=(AllowPrivateAccess=true))
    float WaitForPlayersTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FLobbyPlayerStateInfoArray Players;
    
public:
    ALobbyBeaconState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WaitForPlayersTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyStarted();
    
};

