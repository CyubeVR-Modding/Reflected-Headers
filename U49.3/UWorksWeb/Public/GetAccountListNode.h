#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetAccountListDelegateDelegate.h"
#include "GetAccountListNode.generated.h"

class UGetAccountListNode;

UCLASS()
class UWORKSWEB_API UGetAccountListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAccountListDelegate Completed;
    
    UGetAccountListNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAccountListNode* GetAccountListNode(const FString& Key);
    
};

