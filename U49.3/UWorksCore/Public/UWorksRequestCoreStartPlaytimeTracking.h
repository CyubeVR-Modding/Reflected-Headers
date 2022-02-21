#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "StartPlaytimeTrackingMinimalDelegateDelegate.h"
#include "StartPlaytimeTrackingDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "UWorksRequestCoreStartPlaytimeTracking.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreStartPlaytimeTracking : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStartPlaytimeTrackingDelegate OnRequestCompleted;
    
    UPROPERTY()
    FStartPlaytimeTrackingMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreStartPlaytimeTracking();
    UFUNCTION(BlueprintCallable)
    void SetInput(TArray<FUWorksPublishedFileID> PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

