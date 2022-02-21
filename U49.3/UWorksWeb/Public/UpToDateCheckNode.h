#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "UpToDateCheckDelegateDelegate.h"
#include "UpToDateCheckNode.generated.h"

class UUpToDateCheckNode;

UCLASS()
class UWORKSWEB_API UUpToDateCheckNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUpToDateCheckDelegate Completed;
    
    UUpToDateCheckNode();
    UFUNCTION(BlueprintCallable)
    static UUpToDateCheckNode* UpToDateCheckNode(int32 AppID, int32 Version);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

