#pragma once
#include "CoreMinimal.h"
#include "RequestLobbyListDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CoreRequestLobbyListNode.generated.h"

class UCoreRequestLobbyListNode;

UCLASS()
class UWORKSCORE_API UCoreRequestLobbyListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestLobbyListDelegate Completed;
    
    UCoreRequestLobbyListNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestLobbyListNode* RequestLobbyListNode();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, int32 LobbiesMatching);
    
};

