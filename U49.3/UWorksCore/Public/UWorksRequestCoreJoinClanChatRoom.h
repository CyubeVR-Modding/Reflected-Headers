#pragma once
#include "CoreMinimal.h"
#include "EUWorksChatRoomEnterResponse.h"
#include "UWorksRequestCore.h"
#include "JoinClanChatRoomDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "JoinClanChatRoomMinimalDelegateDelegate.h"
#include "UWorksRequestCoreJoinClanChatRoom.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreJoinClanChatRoom : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FJoinClanChatRoomDelegate OnRequestCompleted;
    
    UPROPERTY()
    FJoinClanChatRoomMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreJoinClanChatRoom();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksSteamID& SteamIDClanChat, EUWorksChatRoomEnterResponse& ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

