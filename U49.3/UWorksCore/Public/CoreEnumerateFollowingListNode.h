#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EnumerateFollowingListDelegateDelegate.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "CoreEnumerateFollowingListNode.generated.h"

class UCoreEnumerateFollowingListNode;

UCLASS()
class UWORKSCORE_API UCoreEnumerateFollowingListNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnumerateFollowingListDelegate Completed;
    
    UCoreEnumerateFollowingListNode();
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result, const TArray<FUWorksSteamID>& SteamIDs, int32 ResultsReturned, int32 TotalResultCount);
    
    UFUNCTION(BlueprintCallable)
    static UCoreEnumerateFollowingListNode* EnumerateFollowingListNode(int32 StartIndex);
    
};

