#pragma once
#include "CoreMinimal.h"
#include "StopPlaytimeTrackingDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "CoreStopPlaytimeTrackingNode.generated.h"

class UCoreStopPlaytimeTrackingNode;

UCLASS()
class UWORKSCORE_API UCoreStopPlaytimeTrackingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStopPlaytimeTrackingDelegate Completed;
    
    UCoreStopPlaytimeTrackingNode();
    UFUNCTION(BlueprintCallable)
    static UCoreStopPlaytimeTrackingNode* StopPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

