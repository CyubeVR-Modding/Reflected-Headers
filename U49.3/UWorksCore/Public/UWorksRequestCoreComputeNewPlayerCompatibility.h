#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "ComputeNewPlayerCompatibilityDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "ComputeNewPlayerCompatibilityMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreComputeNewPlayerCompatibility.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreComputeNewPlayerCompatibility : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FComputeNewPlayerCompatibilityDelegate OnRequestCompleted;
    
    UPROPERTY()
    FComputeNewPlayerCompatibilityMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreComputeNewPlayerCompatibility();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksSteamID SteamIDNewPlayer);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, int32& PlayersThatDontLikeCandidate, int32& PlayersThatCandidateDoesntLike, int32& ClanPlayersThatDontLikeCandidate, FUWorksSteamID& SteamIDCandidate);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

