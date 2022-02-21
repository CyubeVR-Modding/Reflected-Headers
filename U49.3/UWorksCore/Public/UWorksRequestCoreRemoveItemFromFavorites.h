#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RemoveItemFromFavoritesDelegateDelegate.h"
#include "RemoveItemFromFavoritesMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "EUWorksResult.h"
#include "UWorksRequestCoreRemoveItemFromFavorites.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRemoveItemFromFavorites : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRemoveItemFromFavoritesDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRemoveItemFromFavoritesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRemoveItemFromFavorites();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

