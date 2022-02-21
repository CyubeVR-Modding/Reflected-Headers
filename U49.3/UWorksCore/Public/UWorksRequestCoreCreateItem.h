#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "EUWorksResult.h"
#include "CreateItemDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "CreateItemMinimalDelegateDelegate.h"
#include "EUWorksWorkshopFileType.h"
#include "UWorksRequestCoreCreateItem.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreCreateItem : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCreateItemDelegate OnRequestCompleted;
    
    UPROPERTY()
    FCreateItemMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreCreateItem();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 ConsumerAppID, EUWorksWorkshopFileType fileType);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(EUWorksResult& Result, FUWorksPublishedFileID& PublishedFileID, bool& bUserNeedsToAcceptWorkshopLegalAgreement);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

