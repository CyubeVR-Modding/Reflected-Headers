#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RequestGlobalAchievementPercentagesDelegateDelegate.h"
#include "RequestGlobalAchievementPercentagesMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "EUWorksResult.h"
#include "UWorksRequestCoreRequestGlobalAchievementPercentages.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestGlobalAchievementPercentages : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestGlobalAchievementPercentagesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRequestGlobalAchievementPercentagesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestGlobalAchievementPercentages();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

