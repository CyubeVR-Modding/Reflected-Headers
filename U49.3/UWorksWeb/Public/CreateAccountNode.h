#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CreateAccountDelegateDelegate.h"
#include "CreateAccountNode.generated.h"

class UCreateAccountNode;

UCLASS()
class UWORKSWEB_API UCreateAccountNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCreateAccountDelegate Completed;
    
    UCreateAccountNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCreateAccountNode* CreateAccountNode(const FString& Key, int32 AppID, const FString& Memo);
    
};

