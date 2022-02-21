#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnStartStopWorkshopItemsPlaytimeTrackingDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "CallbackProxyStartStopWorkshopItemsPlaytimeTracking.generated.h"

class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking;

UCLASS(MinimalAPI)
class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking OnSteamInitFailure;
    
    UCallbackProxyStartStopWorkshopItemsPlaytimeTracking();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* SteamWorkshop_StartStopItemsPlaytimeTracking(const TArray<FSteamUGCItemId>& itemIds, bool bStartPlaytimeTracking);
    
};

