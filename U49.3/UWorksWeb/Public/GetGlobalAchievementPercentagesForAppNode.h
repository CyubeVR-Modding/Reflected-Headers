#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "GetGlobalAchievementPercentagesForAppDelegateDelegate.h"
#include "GetGlobalAchievementPercentagesForAppNode.generated.h"

class UGetGlobalAchievementPercentagesForAppNode;

UCLASS()
class UWORKSWEB_API UGetGlobalAchievementPercentagesForAppNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetGlobalAchievementPercentagesForAppDelegate Completed;
    
    UGetGlobalAchievementPercentagesForAppNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetGlobalAchievementPercentagesForAppNode* GetGlobalAchievementPercentagesForAppNode(FUWorksGameID GameID);
    
};

