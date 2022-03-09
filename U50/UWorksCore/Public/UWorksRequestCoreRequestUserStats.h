#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RequestUserStatsMinimalDelegateDelegate.h"
#include "RequestUserStatsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "EUWorksResult.h"
#include "UWorksRequestCoreRequestUserStats.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestUserStats : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestUserStatsDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestUserStatsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestUserStats();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result, FUWorksSteamID& SteamID);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

