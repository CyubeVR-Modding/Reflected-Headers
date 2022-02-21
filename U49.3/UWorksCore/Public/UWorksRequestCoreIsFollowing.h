#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "IsFollowingDelegateDelegate.h"
#include "IsFollowingMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestCoreIsFollowing.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreIsFollowing : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIsFollowingDelegate OnRequestCompleted;
    
    UPROPERTY()
    FIsFollowingMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreIsFollowing();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksSteamID& SteamID, bool& bIsFollowing);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

