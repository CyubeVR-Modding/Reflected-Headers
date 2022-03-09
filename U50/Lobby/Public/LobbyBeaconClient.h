#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconClient -FallbackName=OnlineBeaconClient
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ELobbyBeaconJoinState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=JoinabilitySettings -FallbackName=JoinabilitySettings
#include "LobbyBeaconClient.generated.h"

class ALobbyBeaconState;
class ALobbyBeaconPlayerState;

UCLASS(NonTransient)
class LOBBY_API ALobbyBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    ALobbyBeaconState* LobbyState;
    
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    ALobbyBeaconPlayerState* PlayerState;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ELobbyBeaconJoinState LobbyJoinServerState;
    
public:
    ALobbyBeaconClient();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPartyOwner(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& InPartyOwnerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyJoiningServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoginPlayer(const FString& InSessionId, const FUniqueNetIdRepl& InUniqueId, const FString& UrlString);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerKickPlayer(const FUniqueNetIdRepl& PlayerToKick, const FText& Reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDisconnectFromLobby();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheat(const FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWasKicked(const FText& KickReason);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetInviteFlags(const FJoinabilitySettings& Settings);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerLeft(const FUniqueNetIdRepl& InUniqueId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerJoined(const FText& NewPlayerName, const FUniqueNetIdRepl& InUniqueId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLoginComplete(const FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientJoinGame();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAckJoiningServer();
    
};

