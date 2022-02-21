#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "CanTradeDelegateDelegate.h"
#include "CanTradeMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebCanTrade.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebCanTrade : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCanTradeDelegate OnRequestCompleted;
    
    UPROPERTY()
    FCanTradeMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebCanTrade();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID, FUWorksSteamID SteamID, FUWorksSteamID TargetId);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

