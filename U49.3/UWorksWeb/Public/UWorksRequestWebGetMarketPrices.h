#pragma once
#include "CoreMinimal.h"
#include "GetMarketPricesDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetMarketPricesMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetMarketPrices.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetMarketPrices : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetMarketPricesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetMarketPricesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetMarketPrices();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

