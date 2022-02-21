#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FinalizeTxnDelegateDelegate.h"
#include "FinalizeTxnNode.generated.h"

class UFinalizeTxnNode;

UCLASS()
class UWORKSWEB_API UFinalizeTxnNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFinalizeTxnDelegate Completed;
    
    UFinalizeTxnNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UFinalizeTxnNode* FinalizeTxnNode(const FString& Key, const FString& OrderID, int32 AppID);
    
};

