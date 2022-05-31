#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetGlobalAchievementPercentagesForAppDelegateDelegate.h"
#include "GetGlobalAchievementPercentagesForAppNode.generated.h"

class UGetGlobalAchievementPercentagesForAppNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetGlobalAchievementPercentagesForAppNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetGlobalAchievementPercentagesForAppDelegate Completed;
    
    UGetGlobalAchievementPercentagesForAppNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetGlobalAchievementPercentagesForAppNode* GetGlobalAchievementPercentagesForAppNode(FUWorksGameID GameID);
    
};

