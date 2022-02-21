#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetUserStatsForGameDelegateDelegate.h"
#include "GetUserStatsForGameMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetUserStatsForGame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserStatsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUserStatsForGameDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetUserStatsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserStatsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

