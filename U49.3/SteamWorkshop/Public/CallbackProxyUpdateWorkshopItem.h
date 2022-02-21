#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnUpdateWorkshopItemDelegate.h"
#include "SteamDelegateOnUpdateWorkshopItemStartedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "SteamWorkshopUpdateDetails.h"
#include "CallbackProxyUpdateWorkshopItem.generated.h"

class UCallbackProxyUpdateWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxyUpdateWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnUpdateWorkshopItem OnUpdateComplete;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnUpdateWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnUpdateWorkshopItem OnSteamInitFailure;
    
    UCallbackProxyUpdateWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyUpdateWorkshopItem* SteamWorkshop_UpdateItem(const FSteamUGCItemId& ItemId, const FSteamWorkshopUpdateDetails& updateDetails, const FSteamDelegateOnUpdateWorkshopItemStarted& onUpdateStarted);
    
};

