#pragma once
#include "CoreMinimal.h"
#include "GetAppPriceInfoDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetAppPriceInfoMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetAppPriceInfo.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetAppPriceInfo : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetAppPriceInfoDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetAppPriceInfoMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetAppPriceInfo();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, const FString& AppIDs);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

