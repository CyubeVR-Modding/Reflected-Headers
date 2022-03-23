#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnSubscribeUnsubscribeWorkshopItemDelegate.h"
#include "CallbackProxySubscribeUnsubscribeWorkshopItem.generated.h"

class UCallbackProxySubscribeUnsubscribeWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxySubscribeUnsubscribeWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnSteamInitFailure;
    
    UCallbackProxySubscribeUnsubscribeWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxySubscribeUnsubscribeWorkshopItem* SteamWorkshop_SubscribeUnsubscribeItem(const FSteamUGCItemId& ItemId, bool bSubscribe);
    
};

