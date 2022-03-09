#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SetLeaderboardScoreMinimalDelegateDelegate.h"
#include "GetLeaderboardsForGameMinimalDelegateDelegate.h"
#include "ResetLeaderboardMinimalDelegateDelegate.h"
#include "GetLeaderboardEntriesMinimalDelegateDelegate.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate.h"
#include "DeleteLeaderboardMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebLeaderboards.generated.h"

class UUWorksRequestWebResetLeaderboard;
class UUWorksRequestWebSetLeaderboardScore;
class UUWorksRequestWebGetLeaderboardsForGame;
class UUWorksRequestWebGetLeaderboardEntries;
class UUWorksRequestWebFindOrCreateLeaderboard;
class UUWorksRequestWebDeleteLeaderboard;

UCLASS(BlueprintType)
class UWORKSWEB_API UUWorksInterfaceWebLeaderboards : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebLeaderboards();
    UFUNCTION(BlueprintCallable)
    static void SetLeaderboardScoreMinimal(const FString& Key, int32 AppID, int32 LeaderboardID, FUWorksSteamID SteamID, int32 score, const FString& ScoreMethod, TArray<uint8> Details, const FSetLeaderboardScoreMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSetLeaderboardScore* SetLeaderboardScore();
    
    UFUNCTION(BlueprintCallable)
    static void ResetLeaderboardMinimal(const FString& Key, int32 AppID, int32 LeaderboardID, const FResetLeaderboardMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebResetLeaderboard* ResetLeaderboard();
    
    UFUNCTION(BlueprintCallable)
    static void GetLeaderboardsForGameMinimal(const FString& Key, int32 AppID, const FGetLeaderboardsForGameMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetLeaderboardsForGame* GetLeaderboardsForGame();
    
    UFUNCTION(BlueprintCallable)
    static void GetLeaderboardEntriesMinimal(const FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID, const FGetLeaderboardEntriesMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetLeaderboardEntries* GetLeaderboardEntries();
    
    UFUNCTION(BlueprintCallable)
    static void FindOrCreateLeaderboardMinimal(const FString& Key, int32 AppID, const FString& Name, const FString& SortMethod, const FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads, const FFindOrCreateLeaderboardMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebFindOrCreateLeaderboard* FindOrCreateLeaderboard();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteLeaderboardMinimal(const FString& Key, int32 AppID, const FString& Name, const FDeleteLeaderboardMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebDeleteLeaderboard* DeleteLeaderboard();
    
};

