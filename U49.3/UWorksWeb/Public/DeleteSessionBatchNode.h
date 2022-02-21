#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "DeleteSessionBatchDelegateDelegate.h"
#include "DeleteSessionBatchNode.generated.h"

class UDeleteSessionBatchNode;

UCLASS()
class UWORKSWEB_API UDeleteSessionBatchNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeleteSessionBatchDelegate Completed;
    
    UDeleteSessionBatchNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeleteSessionBatchNode* DeleteSessionBatchNode(const FString& Key, const FString& SessionId, int32 AppID);
    
};

