#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "ServerStoreUserStatsDelegateDelegate.h"
#include "ServerStoreUserStatsMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksResult.h"
#include "UWorksRequestCoreStoreUserStats.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreStoreUserStats : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerStoreUserStatsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FServerStoreUserStatsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreStoreUserStats();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

