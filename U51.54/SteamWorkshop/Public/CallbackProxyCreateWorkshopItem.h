#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnCreateWorkshopItemDelegate.h"
#include "SteamWorkshopUpdateDetails.h"
#include "CallbackProxyCreateWorkshopItem.generated.h"

class UCallbackProxyCreateWorkshopItem;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyCreateWorkshopItem : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnCreateWorkshopItem OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnCreateWorkshopItem OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnCreateWorkshopItem OnSteamInitFailure;
    
    UCallbackProxyCreateWorkshopItem();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyCreateWorkshopItem* SteamWorkshop_CreateItem(const FSteamWorkshopUpdateDetails& itemDetails);
    
};

