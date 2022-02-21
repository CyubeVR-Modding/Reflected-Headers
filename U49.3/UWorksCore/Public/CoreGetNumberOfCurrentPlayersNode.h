#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetNumberOfCurrentPlayersDelegateDelegate.h"
#include "CoreGetNumberOfCurrentPlayersNode.generated.h"

class UCoreGetNumberOfCurrentPlayersNode;

UCLASS()
class UWORKSCORE_API UCoreGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetNumberOfCurrentPlayersDelegate Completed;
    
    UCoreGetNumberOfCurrentPlayersNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, bool bSuccess, int32 Players);
    
    UFUNCTION(BlueprintCallable)
    static UCoreGetNumberOfCurrentPlayersNode* GetNumberOfCurrentPlayersNode();
    
};

