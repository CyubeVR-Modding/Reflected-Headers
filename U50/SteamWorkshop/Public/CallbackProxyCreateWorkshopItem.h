#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamWorkshopUpdateDetails.h"
#include "SteamDelegateOnCreateWorkshopItemDelegate.h"
#include "CallbackProxyCreateWorkshopItem.generated.h"

class UCallbackProxyCreateWorkshopItem;

UCLASS(MinimalAPI)
class UCallbackProxyCreateWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnCreateWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnCreateWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnCreateWorkshopItem OnSteamInitFailure;
    
    UCallbackProxyCreateWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyCreateWorkshopItem* SteamWorkshop_CreateItem(const FSteamWorkshopUpdateDetails& itemDetails);
    
};

