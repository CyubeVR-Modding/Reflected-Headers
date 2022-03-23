#pragma once
#include "CoreMinimal.h"
#include "DeleteSessionBatchDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "DeleteSessionBatchNode.generated.h"

class UDeleteSessionBatchNode;

UCLASS()
class UWORKSWEB_API UDeleteSessionBatchNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeleteSessionBatchDelegate Completed;
    
    UDeleteSessionBatchNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeleteSessionBatchNode* DeleteSessionBatchNode(const FString& Key, const FString& SessionId, int32 AppID);
    
};

