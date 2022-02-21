#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ResetLeaderboardDelegateDelegate.h"
#include "ResetLeaderboardNode.generated.h"

class UResetLeaderboardNode;

UCLASS()
class UWORKSWEB_API UResetLeaderboardNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FResetLeaderboardDelegate Completed;
    
    UResetLeaderboardNode();
    UFUNCTION(BlueprintCallable)
    static UResetLeaderboardNode* ResetLeaderboardNode(const FString& Key, int32 AppID, int32 LeaderboardID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
};

