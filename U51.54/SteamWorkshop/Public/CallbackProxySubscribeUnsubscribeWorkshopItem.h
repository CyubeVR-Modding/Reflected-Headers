#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnSubscribeUnsubscribeWorkshopItemDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "CallbackProxySubscribeUnsubscribeWorkshopItem.generated.h"

class UCallbackProxySubscribeUnsubscribeWorkshopItem;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxySubscribeUnsubscribeWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnSubscribeUnsubscribeWorkshopItem OnSteamInitFailure;
    
    UCallbackProxySubscribeUnsubscribeWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxySubscribeUnsubscribeWorkshopItem* SteamWorkshop_SubscribeUnsubscribeItem(const FSteamUGCItemId& ItemId, bool bSubscribe);
    
};

