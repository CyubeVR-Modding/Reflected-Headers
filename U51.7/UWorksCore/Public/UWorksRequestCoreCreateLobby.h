#pragma once
#include "CoreMinimal.h"
#include "CreateLobbyMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CreateLobbyDelegateDelegate.h"
#include "EUWorksLobbyType.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreCreateLobby.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreCreateLobby : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCreateLobbyDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCreateLobbyMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreCreateLobby();
    UFUNCTION(BlueprintCallable)
    void SetInput(EUWorksLobbyType LobbyType, int32 MaxMembers);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

