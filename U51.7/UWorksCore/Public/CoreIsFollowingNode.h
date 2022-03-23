#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "IsFollowingDelegateDelegate.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CoreIsFollowingNode.generated.h"

class UCoreIsFollowingNode;

UCLASS()
class UWORKSCORE_API UCoreIsFollowingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIsFollowingDelegate Completed;
    
    UCoreIsFollowingNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, FUWorksSteamID SteamID, bool bIsFollowing);
    
    UFUNCTION(BlueprintCallable)
    static UCoreIsFollowingNode* IsFollowingNode(FUWorksSteamID SteamID);
    
};

