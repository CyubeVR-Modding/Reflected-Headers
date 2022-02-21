#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "ServerStoreUserStatsMinimalDelegateDelegate.h"
#include "ServerStoreUserStatsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestCoreStoreUserStats.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreStoreUserStats : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FServerStoreUserStatsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FServerStoreUserStatsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreStoreUserStats();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

