#pragma once
#include "CoreMinimal.h"
#include "GetAccountListDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetAccountListNode.generated.h"

class UGetAccountListNode;

UCLASS()
class UWORKSWEB_API UGetAccountListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetAccountListDelegate Completed;
    
    UGetAccountListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAccountListNode* GetAccountListNode(const FString& Key);
    
};

