#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "QueryLoginTokenDelegateDelegate.h"
#include "QueryLoginTokenNode.generated.h"

class UQueryLoginTokenNode;

UCLASS()
class UWORKSWEB_API UQueryLoginTokenNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FQueryLoginTokenDelegate Completed;
    
    UQueryLoginTokenNode();
    UFUNCTION(BlueprintCallable)
    static UQueryLoginTokenNode* QueryLoginTokenNode(const FString& Key, const FString& LoginToken);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

