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
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRulesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRulesUpdateDelegate OnRequestUpdated;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRulesMinimalDelegate OnRequestCompletedMinimal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRulesUpdateMinimalDelegate OnRequestUpdatedMinimal;
    
    UUWorksRequestCoreRules();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksRuleInfo& UpdatedRule, TArray<FUWorksRuleInfo>& Rules);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

