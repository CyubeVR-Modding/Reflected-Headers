#pragma once
#include "CoreMinimal.h"
#include "StartPlaytimeTrackingDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "CoreStartPlaytimeTrackingNode.generated.h"

class UCoreStartPlaytimeTrackingNode;

UCLASS()
class UWORKSCORE_API UCoreStartPlaytimeTrackingNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStartPlaytimeTrackingDelegate Completed;
    
    UCoreStartPlaytimeTrackingNode();
    UFUNCTION(BlueprintCallable)
    static UCoreStartPlaytimeTrackingNode* StartPlaytimeTrackingNode(TArray<FUWorksPublishedFileID> PublishedFileID);
    
    UFUNCTION()
    void OnRequestCompleted(bool bSuccessful, EUWorksResult Result);
    
};

