#pragma once
#include "CoreMinimal.h"
#include "GetGameServerPlayerStatsForGameDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "GetGameServerPlayerStatsForGameNode.generated.h"

class UGetGameServerPlayerStatsForGameNode;

UCLASS()
class UWORKSWEB_API UGetGameServerPlayerStatsForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetGameServerPlayerStatsForGameDelegate Completed;
    
    UGetGameServerPlayerStatsForGameNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetGameServerPlayerStatsForGameNode* GetGameServerPlayerStatsForGameNode(const FString& Key, FUWorksGameID GameID, int32 AppID, const FString& RangeStart, const FString& RangeEnd, int32 MaxResults);
    
};

