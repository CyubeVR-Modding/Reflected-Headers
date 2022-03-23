#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetMarketPricesDelegateDelegate.h"
#include "GetMarketPricesNode.generated.h"

class UGetMarketPricesNode;

UCLASS()
class UWORKSWEB_API UGetMarketPricesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetMarketPricesDelegate Completed;
    
    UGetMarketPricesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetMarketPricesNode* GetMarketPricesNode(const FString& Key, int32 AppID);
    
};

