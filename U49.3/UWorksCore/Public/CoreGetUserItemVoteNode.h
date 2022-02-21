#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "GetUserItemVoteDelegateDelegate.h"
#include "EUWorksResult.h"
#include "CoreGetUserItemVoteNode.generated.h"

class UCoreGetUserItemVoteNode;

UCLASS()
class UWORKSCORE_API UCoreGetUserItemVoteNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUserItemVoteDelegate Completed;
    
    UCoreGetUserItemVoteNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);
    
    UFUNCTION(BlueprintCallable)
    static UCoreGetUserItemVoteNode* GetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID);
    
};

