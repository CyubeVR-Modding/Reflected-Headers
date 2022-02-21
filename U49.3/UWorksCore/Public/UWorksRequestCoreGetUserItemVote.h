#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "GetUserItemVoteDelegateDelegate.h"
#include "GetUserItemVoteMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreGetUserItemVote.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreGetUserItemVote : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetUserItemVoteDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetUserItemVoteMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreGetUserItemVote();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVotedUp, bool& bVotedDown, bool& bVoteSkipped);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

