#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "UploadLeaderboardScoreMinimalDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "UploadLeaderboardScoreDelegateDelegate.h"
#include "EUWorksLeaderboardUploadScoreMethod.h"
#include "UWorksRequestCoreUploadLeaderboardScore.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreUploadLeaderboardScore : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUploadLeaderboardScoreDelegate OnRequestCompleted;
    
    UPROPERTY()
    FUploadLeaderboardScoreMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreUploadLeaderboardScore();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(bool& bSuccess, FUWorksSteamLeaderboard& SteamLeaderboard, int32& score, bool& bScoreChanged, int32& GlobalRankNew, int32& GlobalRankPrevious);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

