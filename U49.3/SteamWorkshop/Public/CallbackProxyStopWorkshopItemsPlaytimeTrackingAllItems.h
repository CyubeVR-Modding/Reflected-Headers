#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnStopWorkshopPlaytimeTrackingAllItemsDelegate.h"
#include "CallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems.generated.h"

class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems;

UCLASS(MinimalAPI)
class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnStopWorkshopPlaytimeTrackingAllItems OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnStopWorkshopPlaytimeTrackingAllItems OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnStopWorkshopPlaytimeTrackingAllItems OnSteamInitFailure;
    
    UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems* SteamWorkshop_StopPlaytimeTrackingAllItems();
    
};

