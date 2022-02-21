#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "QueryTxnDelegateDelegate.h"
#include "QueryTxnNode.generated.h"

class UQueryTxnNode;

UCLASS()
class UWORKSWEB_API UQueryTxnNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FQueryTxnDelegate Completed;
    
    UQueryTxnNode();
    UFUNCTION(BlueprintCallable)
    static UQueryTxnNode* QueryTxnNode(const FString& Key, int32 AppID, const FString& OrderID, const FString& TransID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

