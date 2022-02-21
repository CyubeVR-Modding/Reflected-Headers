#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "JoinLobbyMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "JoinLobbyDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestCoreJoinLobby.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreJoinLobby : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FJoinLobbyDelegate OnRequestCompleted;
    
    UPROPERTY()
    FJoinLobbyMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreJoinLobby();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksSteamID& SteamIDLobby, TArray<uint8>& ChatPermissions, bool& bLocked, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

