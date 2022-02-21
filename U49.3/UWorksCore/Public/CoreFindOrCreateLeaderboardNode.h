#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksLeaderboardDisplayType.h"
#include "EUWorksLeaderboardSortMethod.h"
#include "FindOrCreateLeaderboardDelegateDelegate.h"
#include "UWorksSteamLeaderboard.h"
#include "CoreFindOrCreateLeaderboardNode.generated.h"

class UCoreFindOrCreateLeaderboardNode;

UCLASS()
class UWORKSCORE_API UCoreFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFindOrCreateLeaderboardDelegate Completed;
    
    UCoreFindOrCreateLeaderboardNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksSteamLeaderboard SteamLeaderboard, bool bLeaderboardFound);
    
    UFUNCTION(BlueprintCallable)
    static UCoreFindOrCreateLeaderboardNode* FindOrCreateLeaderboardNode(const FString& LeaderboardName, EUWorksLeaderboardSortMethod LeaderboardSortMethod, EUWorksLeaderboardDisplayType LeaderboardDisplayType);
    
};

