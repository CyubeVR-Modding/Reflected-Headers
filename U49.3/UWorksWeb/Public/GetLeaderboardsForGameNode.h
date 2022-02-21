#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetLeaderboardsForGameDelegateDelegate.h"
#include "GetLeaderboardsForGameNode.generated.h"

class UGetLeaderboardsForGameNode;

UCLASS()
class UWORKSWEB_API UGetLeaderboardsForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetLeaderboardsForGameDelegate Completed;
    
    UGetLeaderboardsForGameNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetLeaderboardsForGameNode* GetLeaderboardsForGameNode(const FString& Key, int32 AppID);
    
};

