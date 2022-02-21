#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "UWorksSteamLeaderboard.h"
#include "DownloadLeaderboardEntriesDelegateDelegate.h"
#include "EUWorksLeaderboardDataRequest.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "CoreDownloadLeaderboardEntriesNode.generated.h"

class UCoreDownloadLeaderboardEntriesNode;

UCLASS()
class UWORKSCORE_API UCoreDownloadLeaderboardEntriesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDownloadLeaderboardEntriesDelegate Completed;
    
    UCoreDownloadLeaderboardEntriesNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    
    UFUNCTION(BlueprintCallable)
    static UCoreDownloadLeaderboardEntriesNode* DownloadLeaderboardEntriesNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32 RangeStart, int32 RangeEnd);
    
};

