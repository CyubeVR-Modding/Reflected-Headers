#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
#include "RequestGlobalStatsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "CoreRequestGlobalStatsNode.generated.h"

class UCoreRequestGlobalStatsNode;

UCLASS()
class UWORKSCORE_API UCoreRequestGlobalStatsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestGlobalStatsDelegate Completed;
    
    UCoreRequestGlobalStatsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestGlobalStatsNode* RequestGlobalStatsNode(int32 HistoryDays);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    
};

