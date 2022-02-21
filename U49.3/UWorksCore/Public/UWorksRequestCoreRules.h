#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RulesDelegateDelegate.h"
#include "RulesUpdateDelegateDelegate.h"
#include "RulesMinimalDelegateDelegate.h"
#include "RulesUpdateMinimalDelegateDelegate.h"
#include "UWorksRuleInfo.h"
#include "UWorksRequestCoreRules.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRules : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRulesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FRulesUpdateDelegate OnRequestUpdated;
    
    UPROPERTY()
    FRulesMinimalDelegate OnRequestCompletedMinimal;
    
    UPROPERTY()
    FRulesUpdateMinimalDelegate OnRequestUpdatedMinimal;
    
    UUWorksRequestCoreRules();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksRuleInfo& UpdatedRule, TArray<FUWorksRuleInfo>& Rules);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

