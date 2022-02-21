#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SetUserItemVoteDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "CoreSetUserItemVoteNode.generated.h"

class UCoreSetUserItemVoteNode;

UCLASS()
class UWORKSCORE_API UCoreSetUserItemVoteNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetUserItemVoteDelegate Completed;
    
    UCoreSetUserItemVoteNode();
    UFUNCTION(BlueprintCallable)
    static UCoreSetUserItemVoteNode* SetUserItemVoteNode(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, FUWorksPublishedFileID PublishedFileID, EUWorksResult Result, bool bVoteUp);
    
};

