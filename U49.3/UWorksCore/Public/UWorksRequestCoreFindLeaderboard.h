#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksRequestCore.h"
#include "FindLeaderboardDelegateDelegate.h"
#include "FindLeaderboardMinimalDelegateDelegate.h"
#include "UWorksRequestCoreFindLeaderboard.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreFindLeaderboard : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFindLeaderboardDelegate OnRequestCompleted;
    
    UPROPERTY()
    FFindLeaderboardMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreFindLeaderboard();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& LeaderboardName);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksSteamLeaderboard& SteamLeaderboard, bool& bLeaderboardFound);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

