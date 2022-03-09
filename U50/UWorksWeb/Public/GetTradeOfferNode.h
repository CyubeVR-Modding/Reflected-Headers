#pragma once
#include "CoreMinimal.h"
#include "GetTradeOfferDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetTradeOfferNode.generated.h"

class UGetTradeOfferNode;

UCLASS()
class UWORKSWEB_API UGetTradeOfferNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetTradeOfferDelegate Completed;
    
    UGetTradeOfferNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetTradeOfferNode* GetTradeOfferNode(const FString& Key, const FString& TradeOfferID, const FString& Language);
    
};

