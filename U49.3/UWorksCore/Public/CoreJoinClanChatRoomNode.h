#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "JoinClanChatRoomDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksChatRoomEnterResponse.h"
#include "CoreJoinClanChatRoomNode.generated.h"

class UCoreJoinClanChatRoomNode;

UCLASS()
class UWORKSCORE_API UCoreJoinClanChatRoomNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FJoinClanChatRoomDelegate Completed;
    
    UCoreJoinClanChatRoomNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamID SteamIDClanChat, EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
    
    UFUNCTION(BlueprintCallable)
    static UCoreJoinClanChatRoomNode* JoinClanChatRoomNode(FUWorksSteamID SteamIDClan);
    
};

