#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "DownloadLeaderboardEntriesForUsersDelegateDelegate.h"
#include "UWorksRequestCore.h"
#include "DownloadLeaderboardEntriesForUsersMinimalDelegateDelegate.h"
#include "UWorksSteamLeaderboardEntries.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestCoreDownloadLeaderboardEntriesForUsers.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreDownloadLeaderboardEntriesForUsers : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDownloadLeaderboardEntriesForUsersDelegate OnRequestCompleted;
    
    UPROPERTY()
    FDownloadLeaderboardEntriesForUsersMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreDownloadLeaderboardEntriesForUsers();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32& EntryCount);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

