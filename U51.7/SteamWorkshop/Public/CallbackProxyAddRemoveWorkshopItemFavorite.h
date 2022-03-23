#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnAddRemoveWorkshopItemFavoriteDelegate.h"
#include "CallbackProxyAddRemoveWorkshopItemFavorite.generated.h"

class UCallbackProxyAddRemoveWorkshopItemFavorite;

UCLASS(MinimalAPI)
class UCallbackProxyAddRemoveWorkshopItemFavorite : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnAddRemoveWorkshopItemFavorite OnSteamInitFailure;
    
    UCallbackProxyAddRemoveWorkshopItemFavorite();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyAddRemoveWorkshopItemFavorite* SteamWorkshop_AddRemoveItemFavorite(const FSteamUGCItemId& ItemId, bool bAddToFavourites);
    
};

