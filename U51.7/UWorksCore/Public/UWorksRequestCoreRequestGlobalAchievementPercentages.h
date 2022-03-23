#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RequestGlobalAchievementPercentagesDelegateDelegate.h"
#include "EUWorksResult.h"
#include "RequestGlobalAchievementPercentagesMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "UWorksRequestCoreRequestGlobalAchievementPercentages.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestGlobalAchievementPercentages : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestGlobalAchievementPercentagesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestGlobalAchievementPercentagesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestGlobalAchievementPercentages();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksGameID& GameID, EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};
