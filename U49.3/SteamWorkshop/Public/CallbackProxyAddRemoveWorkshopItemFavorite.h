#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnAddRemoveWorkshopItemFavoriteDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "CallbackProxyAddRemoveWorkshopItemFavorite.generated.h"

class UCallbackProxyAddRemoveWorkshopItemFavorite;

UCLASS(MinimalAPI)
class UCallbackProxyAddRemoveWorkshopItemFavorite : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnSteamInitFailure;
    
    UCallbackProxyAddRemoveWorkshopItemFavorite();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyAddRemoveWorkshopItemFavorite* SteamWorkshop_AddRemoveItemFavorite(const FSteamUGCItemId& ItemId, bool bAddToFavourites);
    
};

