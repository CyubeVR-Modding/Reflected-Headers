#pragma once
#include "CoreMinimal.h"
#include "GetTradeOffersSummaryDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetTradeOffersSummaryNode.generated.h"

class UGetTradeOffersSummaryNode;

UCLASS()
class UWORKSWEB_API UGetTradeOffersSummaryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetTradeOffersSummaryDelegate Completed;
    
    UGetTradeOffersSummaryNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetTradeOffersSummaryNode* GetTradeOffersSummaryNode(const FString& Key, int32 TimeLastVisit);
    
};

