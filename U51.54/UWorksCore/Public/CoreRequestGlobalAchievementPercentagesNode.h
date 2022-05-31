#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RequestGlobalAchievementPercentagesDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreRequestGlobalAchievementPercentagesNode.generated.h"

class UCoreRequestGlobalAchievementPercentagesNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreRequestGlobalAchievementPercentagesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestGlobalAchievementPercentagesDelegate Completed;
    
    UCoreRequestGlobalAchievementPercentagesNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestGlobalAchievementPercentagesNode* RequestGlobalAchievementPercentagesNode();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    
};

