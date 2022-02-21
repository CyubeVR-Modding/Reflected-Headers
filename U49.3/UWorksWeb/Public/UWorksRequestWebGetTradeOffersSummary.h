#pragma once
#include "CoreMinimal.h"
#include "GetTradeOffersSummaryDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetTradeOffersSummaryMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetTradeOffersSummary.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetTradeOffersSummary : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetTradeOffersSummaryDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetTradeOffersSummaryMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetTradeOffersSummary();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 TimeLastVisit);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

