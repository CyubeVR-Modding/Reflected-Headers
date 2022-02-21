#pragma once
#include "CoreMinimal.h"
#include "UWorksSteamLeaderboard.h"
#include "UWorksRequestCore.h"
#include "AttachLeaderboardUGCDelegateDelegate.h"
#include "AttachLeaderboardUGCMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksUGCHandle.h"
#include "UWorksRequestCoreAttachLeaderboardUGC.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreAttachLeaderboardUGC : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAttachLeaderboardUGCDelegate OnRequestCompleted;
    
    UPROPERTY()
    FAttachLeaderboardUGCMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreAttachLeaderboardUGC();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamLeaderboard SteamLeaderboard, FUWorksUGCHandle UGCHandle);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamLeaderboard& SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

