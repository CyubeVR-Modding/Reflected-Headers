#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksRequestCore.h"
#include "EUWorksLeaderboardDisplayType.h"
#include "EUWorksLeaderboardSortMethod.h"
#include "FindOrCreateLeaderboardDelegateDelegate.h"
#include "FindOrCreateLeaderboardMinimalDelegateDelegate.h"
#include "UWorksRequestCoreFindOrCreateLeaderboard.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreFindOrCreateLeaderboard : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFindOrCreateLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY()
    FFindOrCreateLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreFindOrCreateLeaderboard();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

