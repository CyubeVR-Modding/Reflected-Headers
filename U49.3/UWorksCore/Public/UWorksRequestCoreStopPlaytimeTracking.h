#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "StopPlaytimeTrackingDelegateDelegate.h"
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "UWorksRequestCoreStopPlaytimeTracking.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreStopPlaytimeTracking : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStopPlaytimeTrackingDelegate OnRequestCompleted;
    
    UPROPERTY()
    FStopPlaytimeTrackingMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreStopPlaytimeTracking();
    UFUNCTION(BlueprintCallable)
    void SetInput(TArray<FUWorksPublishedFileID> PublishedFileIDs);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

