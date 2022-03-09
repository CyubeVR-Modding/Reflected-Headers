#pragma once
#include "CoreMinimal.h"
#include "EUWorksLobbyType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CreateLobbyDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreCreateLobbyNode.generated.h"

class UCoreCreateLobbyNode;

UCLASS()
class UWORKSCORE_API UCoreCreateLobbyNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCreateLobbyDelegate Completed;
    
    UCoreCreateLobbyNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static UCoreCreateLobbyNode* CreateLobbyNode(EUWorksLobbyType LobbyType, int32 MaxMembers);
    
};

