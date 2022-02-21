#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "GetFollowerCountDelegateDelegate.h"
#include "GetFollowerCountMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "EUWorksResult.h"
#include "UWorksRequestCoreGetFollowerCount.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreGetFollowerCount : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetFollowerCountDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetFollowerCountMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreGetFollowerCount();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, int32& Count);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

