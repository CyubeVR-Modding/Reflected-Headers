#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "DownloadLeaderboardEntriesForUsersDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksSteamLeaderboard.h"
#include "UWorksSteamLeaderboardEntries.h"
#include "CoreDownloadLeaderboardEntriesForUsersNode.generated.h"

class UCoreDownloadLeaderboardEntriesForUsersNode;

UCLASS()
class UWORKSCORE_API UCoreDownloadLeaderboardEntriesForUsersNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDownloadLeaderboardEntriesForUsersDelegate Completed;
    
    UCoreDownloadLeaderboardEntriesForUsersNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, FUWorksSteamLeaderboardEntries SteamLeaderboardEntries, int32 EntryCount);
    
    UFUNCTION(BlueprintCallable)
    static UCoreDownloadLeaderboardEntriesForUsersNode* DownloadLeaderboardEntriesForUsersNode(FUWorksSteamLeaderboard SteamLeaderboard, TArray<FUWorksSteamID> Users);
    
};

