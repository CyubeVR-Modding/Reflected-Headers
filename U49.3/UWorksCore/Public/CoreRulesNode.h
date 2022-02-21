#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RulesUpdateDelegateDelegate.h"
#include "UWorksRuleInfo.h"
#include "CoreRulesNode.generated.h"

class UCoreRulesNode;

UCLASS()
class UWORKSCORE_API UCoreRulesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRulesUpdateDelegate Updated;
    
    UCoreRulesNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRulesNode* RulesNode(const FString& IP, int32 Port, int32 MaxUpdates);
    
    UFUNCTION()
    void OnRequestUpdated(bool bSuccessful, FUWorksRuleInfo Rule);
    
};

