#pragma once
#include "CoreMinimal.h"
#include "UWorksPlayerInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "PlayersUpdateDelegateDelegate.h"
#include "CorePlayersNode.generated.h"

class UCorePlayersNode;

UCLASS()
class UWORKSCORE_API UCorePlayersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayersUpdateDelegate Updated;
    
    UCorePlayersNode();
    UFUNCTION(BlueprintCallable)
    static UCorePlayersNode* PlayersNode(const FString& IP, int32 Port, int32 MaxUpdates);
    
    UFUNCTION()
    void OnRequestUpdated(bool bSuccessful, FUWorksPlayerInfo Player);
    
};

