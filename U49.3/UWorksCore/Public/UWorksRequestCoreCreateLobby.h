#pragma once
#include "CoreMinimal.h"
#include "EUWorksLobbyType.h"
#include "UWorksRequestCore.h"
#include "CreateLobbyDelegateDelegate.h"
#include "CreateLobbyMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestCoreCreateLobby.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreCreateLobby : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCreateLobbyDelegate OnRequestCompleted;
    
    UPROPERTY()
    FCreateLobbyMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreCreateLobby();
    UFUNCTION(BlueprintCallable)
    void SetInput(EUWorksLobbyType LobbyType, int32 MaxMembers);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

