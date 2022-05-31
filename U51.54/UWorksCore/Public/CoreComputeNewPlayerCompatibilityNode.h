#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ComputeNewPlayerCompatibilityDelegateDelegate.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CoreComputeNewPlayerCompatibilityNode.generated.h"

class UCoreComputeNewPlayerCompatibilityNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreComputeNewPlayerCompatibilityNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComputeNewPlayerCompatibilityDelegate Completed;
    
    UCoreComputeNewPlayerCompatibilityNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate, FUWorksSteamID SteamIDCandidate);
    
    UFUNCTION(BlueprintCallable)
    static UCoreComputeNewPlayerCompatibilityNode* ComputeNewPlayerCompatibilityNode(FUWorksSteamID SteamIDNewPlayer);
    
};

