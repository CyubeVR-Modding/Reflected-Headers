#pragma once
#include "CoreMinimal.h"
#include "GSValidateAuthTicketResponseDelegateDelegate.h"
#include "GSClientGroupStatusDelegateDelegate.h"
#include "UWorksInterfaceCore.h"
#include "EUWorksUserHasLicenseForAppResult.h"
#include "GSPolicyResponseDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksTicketHandle.h"
#include "ComputeNewPlayerCompatibilityMinimalDelegateDelegate.h"
#include "EUWorksBeginAuthSessionResult.h"
#include "AssociateWithClanMinimalDelegateDelegate.h"
#include "UWorksInterfaceCoreGameServer.generated.h"

class UUWorksInterfaceCoreGameServer;
class UUWorksRequestCoreComputeNewPlayerCompatibility;
class UUWorksRequestCoreAssociateWithClan;

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksInterfaceCoreGameServer : public UUWorksInterfaceCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGSPolicyResponseDelegate GSPolicyResponse;
    
    UPROPERTY(BlueprintAssignable)
    FGSClientGroupStatusDelegate GSClientGroupStatus;
    
    UPROPERTY(BlueprintAssignable)
    FGSValidateAuthTicketResponseDelegate GSValidateAuthTicketResponse;
    
    UUWorksInterfaceCoreGameServer();
    UFUNCTION(BlueprintCallable)
    bool WasRestartRequested();
    
    UFUNCTION(BlueprintCallable)
    EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void SetServerName(const FString& ServerName);
    
    UFUNCTION(BlueprintCallable)
    void SetRegion(const FString& Region);
    
    UFUNCTION(BlueprintCallable)
    void SetPasswordProtected(bool bPasswordProtected);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPlayerCount(int32 PlayersMax);
    
    UFUNCTION(BlueprintCallable)
    void SetMapName(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyValue(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeartbeatInterval(int32 HeartbeatInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetGameTags(const FString& GameTags);
    
    UFUNCTION(BlueprintCallable)
    void SetGameData(const FString& GameData);
    
    UFUNCTION(BlueprintCallable)
    void SetBotPlayerCount(int32 BotPlayers);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUserGroupStatus(FUWorksSteamID SteamIDUser, FUWorksSteamID SteamIDGroup);
    
    UFUNCTION(BlueprintCallable)
    FUWorksSteamID GetSteamID();
    
    UFUNCTION(BlueprintPure)
    static UUWorksInterfaceCoreGameServer* GetGameServer();
    
    UFUNCTION(BlueprintCallable)
    FUWorksTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    
    UFUNCTION(BlueprintCallable)
    void ForceHeartbeat();
    
    UFUNCTION(BlueprintCallable)
    void EndAuthSession(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void EnableHeartbeats(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void ComputeNewPlayerCompatibilityMinimal(const FComputeNewPlayerCompatibilityMinimalDelegate& Completed, FUWorksSteamID SteamIDNewPlayer);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreComputeNewPlayerCompatibility* ComputeNewPlayerCompatibility();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllKeyValues();
    
    UFUNCTION(BlueprintCallable)
    void CancelAuthTicket(FUWorksTicketHandle TicketHandle);
    
    UFUNCTION(BlueprintCallable)
    bool BSecure();
    
    UFUNCTION(BlueprintCallable)
    bool BLoggedOn();
    
    UFUNCTION(BlueprintCallable)
    EUWorksBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void AssociateWithClanMinimal(const FAssociateWithClanMinimalDelegate& Completed, FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    UUWorksRequestCoreAssociateWithClan* AssociateWithClan();
    
};

