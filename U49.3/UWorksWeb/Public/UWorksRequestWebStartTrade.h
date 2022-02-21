#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "StartTradeDelegateDelegate.h"
#include "StartTradeMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebStartTrade.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebStartTrade : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStartTradeDelegate OnRequestCompleted;
    
    UPROPERTY()
    FStartTradeMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebStartTrade();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID PartyA, FUWorksSteamID PartyB);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

