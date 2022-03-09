#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "CancelTradeOfferDelegateDelegate.h"
#include "CancelTradeOfferNode.generated.h"

class UCancelTradeOfferNode;

UCLASS()
class UWORKSWEB_API UCancelTradeOfferNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCancelTradeOfferDelegate Completed;
    
    UCancelTradeOfferNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UCancelTradeOfferNode* CancelTradeOfferNode(const FString& Key, const FString& TradeOfferID);
    
};

