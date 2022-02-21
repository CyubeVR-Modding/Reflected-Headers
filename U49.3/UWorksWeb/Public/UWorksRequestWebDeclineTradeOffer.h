#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "DeclineTradeOfferDelegateDelegate.h"
#include "DeclineTradeOfferMinimalDelegateDelegate.h"
#include "UWorksRequestWebDeclineTradeOffer.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebDeclineTradeOffer : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeclineTradeOfferDelegate OnRequestCompleted;
    
    UPROPERTY()
    FDeclineTradeOfferMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebDeclineTradeOffer();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, const FString& TradeOfferID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

