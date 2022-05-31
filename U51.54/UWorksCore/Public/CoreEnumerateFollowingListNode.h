#pragma once
#include "CoreMinimal.h"
#include "EnumerateFollowingListDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CoreEnumerateFollowingListNode.generated.h"

class UCoreEnumerateFollowingListNode;

UCLASS(Blueprintable)
class UWORKSCORE_API UCoreEnumerateFollowingListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnumerateFollowingListDelegate Completed;
    
    UCoreEnumerateFollowingListNode();
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);
    
    UFUNCTION(BlueprintCallable)
    static UCoreEnumerateFollowingListNode* EnumerateFollowingListNode(int32 StartIndex);
    
};

