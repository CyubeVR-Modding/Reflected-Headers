#pragma once
#include "CoreMinimal.h"
#include "UploadLeaderboardScoreDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "UWorksSteamLeaderboard.h"
#include "EUWorksLeaderboardUploadScoreMethod.h"
#include "CoreUploadLeaderboardScoreNode.generated.h"

class UCoreUploadLeaderboardScoreNode;

UCLASS()
class UWORKSCORE_API UCoreUploadLeaderboardScoreNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUploadLeaderboardScoreDelegate Completed;
    
    UCoreUploadLeaderboardScoreNode();
    UFUNCTION(BlueprintCallable)
    static UCoreUploadLeaderboardScoreNode* UploadLeaderboardScoreNode(FUWorksSteamLeaderboard SteamLeaderboard, EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32 score, TArray<int32> ScoreDetails);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, bool bSuccess, FUWorksSteamLeaderboard SteamLeaderboard, int32 score, bool bScoreChanged, int32 GlobalRankNew, int32 GlobalRankPrevious);
    
};

