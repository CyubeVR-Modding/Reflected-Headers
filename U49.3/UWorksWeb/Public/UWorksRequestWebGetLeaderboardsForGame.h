#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetLeaderboardsForGameDelegateDelegate.h"
#include "GetLeaderboardsForGameMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetLeaderboardsForGame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetLeaderboardsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetLeaderboardsForGameDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetLeaderboardsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetLeaderboardsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

