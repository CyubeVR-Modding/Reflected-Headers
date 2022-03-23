#pragma once
#include "CoreMinimal.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RequestGlobalStatsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "CoreRequestGlobalStatsNode.generated.h"

class UCoreRequestGlobalStatsNode;

UCLASS()
class UWORKSCORE_API UCoreRequestGlobalStatsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRequestGlobalStatsDelegate Completed;
    
    UCoreRequestGlobalStatsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreRequestGlobalStatsNode* RequestGlobalStatsNode(int32 HistoryDays);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, FUWorksGameID GameID, EUWorksResult Result);
    
};

