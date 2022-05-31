#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "GetLeaderboardsForGameDelegateDelegate.h"
#include "GetLeaderboardsForGameNode.generated.h"

class UGetLeaderboardsForGameNode;

UCLASS(Blueprintable)
class UWORKSWEB_API UGetLeaderboardsForGameNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetLeaderboardsForGameDelegate Completed;
    
    UGetLeaderboardsForGameNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    static UGetLeaderboardsForGameNode* GetLeaderboardsForGameNode(const FString& Key, int32 AppID);
    
};

