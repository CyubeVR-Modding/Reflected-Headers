#pragma once
#include "CoreMinimal.h"
#include "GetLeaderboardEntriesDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "GetLeaderboardEntriesNode.generated.h"

class UGetLeaderboardEntriesNode;

UCLASS()
class UWORKSWEB_API UGetLeaderboardEntriesNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetLeaderboardEntriesDelegate Completed;
    
    UGetLeaderboardEntriesNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetLeaderboardEntriesNode* GetLeaderboardEntriesNode(const FString& Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardID, int32 DataRequest, FUWorksSteamID SteamID);
    
};

