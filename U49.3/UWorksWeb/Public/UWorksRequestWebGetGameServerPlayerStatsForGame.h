#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestWeb.h"
#include "GetGameServerPlayerStatsForGameDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "GetGameServerPlayerStatsForGameMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetGameServerPlayerStatsForGame.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetGameServerPlayerStatsForGame : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetGameServerPlayerStatsForGameDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetGameServerPlayerStatsForGameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetGameServerPlayerStatsForGame();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Key, FUWorksGameID GameID, int32 AppID, const FString& RangeStart, const FString& RangeEnd, int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

