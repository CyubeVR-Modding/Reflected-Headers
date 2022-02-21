#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "DeleteLeaderboardDelegateDelegate.h"
#include "DeleteLeaderboardNode.generated.h"

class UDeleteLeaderboardNode;

UCLASS()
class UWORKSWEB_API UDeleteLeaderboardNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeleteLeaderboardDelegate Completed;
    
    UDeleteLeaderboardNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UDeleteLeaderboardNode* DeleteLeaderboardNode(const FString& Key, int32 AppID, const FString& Name);
    
};

