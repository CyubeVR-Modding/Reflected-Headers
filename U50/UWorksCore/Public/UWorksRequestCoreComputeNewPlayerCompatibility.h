#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "ComputeNewPlayerCompatibilityDelegateDelegate.h"
#include "EUWorksResult.h"
#include "ComputeNewPlayerCompatibilityMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "UWorksRequestCoreComputeNewPlayerCompatibility.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreComputeNewPlayerCompatibility : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FComputeNewPlayerCompatibilityDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FComputeNewPlayerCompatibilityMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreComputeNewPlayerCompatibility();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDNewPlayer);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(EUWorksResult& Result, int32& PlayersThatDontLikeCandidate, int32& PlayersThatCandidateDoesntLike, int32& ClanPlayersThatDontLikeCandidate, FUWorksSteamID& SteamIDCandidate);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

