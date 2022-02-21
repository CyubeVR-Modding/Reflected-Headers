#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetMarketEligibilityDelegateDelegate.h"
#include "GetMarketEligibilityMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetMarketEligibility.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetMarketEligibility : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetMarketEligibilityDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetMarketEligibilityMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetMarketEligibility();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

