#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "DownloadLeaderboardEntriesDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "DownloadLeaderboardEntriesMinimalDelegateDelegate.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "EUWorksLeaderboardDataRequest.h"
#include "UWorksRequestCoreDownloadLeaderboardEntries.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreDownloadLeaderboardEntries : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDownloadLeaderboardEntriesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FDownloadLeaderboardEntriesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreDownloadLeaderboardEntries();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32& EntryCount);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

