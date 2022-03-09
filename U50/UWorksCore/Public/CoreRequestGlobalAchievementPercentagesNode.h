#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RequestGlobalAchievementPercentagesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "EUWorksResult.h"
#include "CoreRequestGlobalAchievementPercentagesNode.generated.h"

class UCoreRequestGlobalAchievementPercentagesNode;

UCLASS()
class UWORKSCORE_API UCoreRequestGlobalAchievementPercentagesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestGlobalAchievementPercentagesDelegate Completed;
    
    UCoreRequestGlobalAchievementPercentagesNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestGlobalAchievementPercentagesNode* RequestGlobalAchievementPercentagesNode();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    
};

