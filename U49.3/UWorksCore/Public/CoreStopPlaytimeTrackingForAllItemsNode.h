#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingForAllItemsDelegateDelegate.h"
#include "CoreStopPlaytimeTrackingForAllItemsNode.generated.h"

class UCoreStopPlaytimeTrackingForAllItemsNode;

UCLASS()
class UWORKSCORE_API UCoreStopPlaytimeTrackingForAllItemsNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStopPlaytimeTrackingForAllItemsDelegate Completed;
    
    UCoreStopPlaytimeTrackingForAllItemsNode();
    UFUNCTION(BlueprintCallable)
    static UCoreStopPlaytimeTrackingForAllItemsNode* StopPlaytimeTrackingForAllItemsNode();
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

