#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetTradeOffersSummaryDelegateDelegate.h"
#include "GetTradeOffersSummaryNode.generated.h"

class UGetTradeOffersSummaryNode;

UCLASS()
class UWORKSWEB_API UGetTradeOffersSummaryNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetTradeOffersSummaryDelegate Completed;
    
    UGetTradeOffersSummaryNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetTradeOffersSummaryNode* GetTradeOffersSummaryNode(const FString& Key, int32 TimeLastVisit);
    
};

