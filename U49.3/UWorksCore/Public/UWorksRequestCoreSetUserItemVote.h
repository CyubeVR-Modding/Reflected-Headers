#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "SetUserItemVoteDelegateDelegate.h"
#include "SetUserItemVoteMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "UWorksRequestCoreSetUserItemVote.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreSetUserItemVote : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetUserItemVoteDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSetUserItemVoteMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreSetUserItemVote();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksPublishedFileID PublishedFileID, bool bVoteUp);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bVoteUp);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

