#pragma once
#include "CoreMinimal.h"
#include "CreateLobbyDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksLobbyType.h"
#include "CoreCreateLobbyNode.generated.h"

class UCoreCreateLobbyNode;

UCLASS()
class UWORKSCORE_API UCoreCreateLobbyNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCreateLobbyDelegate Completed;
    
    UCoreCreateLobbyNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static UCoreCreateLobbyNode* CreateLobbyNode(EUWorksLobbyType LobbyType, int32 MaxMembers);
    
};

