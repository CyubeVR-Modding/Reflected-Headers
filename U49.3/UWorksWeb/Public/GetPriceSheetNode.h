#pragma once
#include "CoreMinimal.h"
#include "GetPriceSheetDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetPriceSheetNode.generated.h"

class UGetPriceSheetNode;

UCLASS()
class UWORKSWEB_API UGetPriceSheetNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetPriceSheetDelegate Completed;
    
    UGetPriceSheetNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetPriceSheetNode* GetPriceSheetNode(const FString& Key, int32 ECurrency);
    
};

