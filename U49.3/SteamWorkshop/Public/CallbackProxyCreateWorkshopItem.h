#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnCreateWorkshopItemDelegate.h"
#include "SteamWorkshopUpdateDetails.h"
#include "CallbackProxyCreateWorkshopItem.generated.h"

class UCallbackProxyCreateWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxyCreateWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnCreateWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnCreateWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnCreateWorkshopItem OnSteamInitFailure;
    
    UCallbackProxyCreateWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyCreateWorkshopItem* SteamWorkshop_CreateItem(const FSteamWorkshopUpdateDetails& itemDetails);
    
};

