#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "StopPlaytimeTrackingForAllItemsDelegateDelegate.h"
#include "StopPlaytimeTrackingForAllItemsMinimalDelegateDelegate.h"
#include "UWorksRequestCoreStopPlaytimeTrackingForAllItems.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreStopPlaytimeTrackingForAllItems : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStopPlaytimeTrackingForAllItemsDelegate OnRequestCompleted;
    
    UPROPERTY()
    FStopPlaytimeTrackingForAllItemsMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreStopPlaytimeTrackingForAllItems();
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

