#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "UnsubscribeItemMinimalDelegateDelegate.h"
#include "UnsubscribeItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "UWorksRequestCoreUnsubscribeItem.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreUnsubscribeItem : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUnsubscribeItemDelegate OnRequestCompleted;
    
    UPROPERTY()
    FUnsubscribeItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreUnsubscribeItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

