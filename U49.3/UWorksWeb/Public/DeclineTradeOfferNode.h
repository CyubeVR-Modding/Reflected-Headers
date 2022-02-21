#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "DeclineTradeOfferDelegateDelegate.h"
#include "DeclineTradeOfferNode.generated.h"

class UDeclineTradeOfferNode;

UCLASS()
class UWORKSWEB_API UDeclineTradeOfferNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeclineTradeOfferDelegate Completed;
    
    UDeclineTradeOfferNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeclineTradeOfferNode* DeclineTradeOfferNode(const FString& Key, const FString& TradeOfferID);
    
};

