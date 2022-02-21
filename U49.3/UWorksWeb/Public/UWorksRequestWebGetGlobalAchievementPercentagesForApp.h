#pragma once
#include "CoreMinimal.h"
#include "GetGlobalAchievementPercentagesForAppMinimalDelegateDelegate.h"
#include "UWorksRequestWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "GetGlobalAchievementPercentagesForAppDelegateDelegate.h"
#include "UWorksRequestWebGetGlobalAchievementPercentagesForApp.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetGlobalAchievementPercentagesForApp : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetGlobalAchievementPercentagesForAppDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetGlobalAchievementPercentagesForAppMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetGlobalAchievementPercentagesForApp();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksGameID GameID);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

