#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "ServerRequestUserStatsMinimalDelegateDelegate.h"
#include "ServerRequestUserStatsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksResult.h"
#include "UWorksRequestCoreRequestUserStatsGS.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestUserStatsGS : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FServerRequestUserStatsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FServerRequestUserStatsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestUserStatsGS();
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

