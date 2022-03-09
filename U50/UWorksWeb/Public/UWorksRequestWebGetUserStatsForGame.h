#pragma once
#include "CoreMinimal.h"
#include "GetUserStatsForGameDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetUserStatsForGameMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestWebGetUserStatsForGame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetUserStatsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserStatsForGameDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetUserStatsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetUserStatsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

