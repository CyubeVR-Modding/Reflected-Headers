#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "AddItemToFavoritesDelegateDelegate.h"
#include "EUWorksResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksPublishedFileID -FallbackName=UWorksPublishedFileID
#include "AddItemToFavoritesMinimalDelegateDelegate.h"
#include "UWorksRequestCoreAddItemToFavorites.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreAddItemToFavorites : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAddItemToFavoritesDelegate OnRequestCompleted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAddItemToFavoritesMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreAddItemToFavorites();
    UFUNCTION(BlueprintCallable)
    void SetInput(int32 AppID, FUWorksPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOutput(FUWorksPublishedFileID& PublishedFileID, EUWorksResult& Result, bool& bWasAddRequest);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

