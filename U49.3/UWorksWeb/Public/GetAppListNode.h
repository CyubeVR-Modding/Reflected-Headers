#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetAppListDelegateDelegate.h"
#include "GetAppListNode.generated.h"

class UGetAppListNode;

UCLASS()
class UWORKSWEB_API UGetAppListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAppListDelegate Completed;
    
    UGetAppListNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetAppListNode* GetAppListNode();
    
};

