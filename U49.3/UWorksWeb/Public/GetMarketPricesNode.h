#pragma once
#include "CoreMinimal.h"
#include "GetMarketPricesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetMarketPricesNode.generated.h"

class UGetMarketPricesNode;

UCLASS()
class UWORKSWEB_API UGetMarketPricesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetMarketPricesDelegate Completed;
    
    UGetMarketPricesNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetMarketPricesNode* GetMarketPricesNode(const FString& Key, int32 AppID);
    
};

