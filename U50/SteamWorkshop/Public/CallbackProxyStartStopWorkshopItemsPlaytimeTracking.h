#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SteamGeneral -ObjectName=SteamUGCItemId -FallbackName=SteamUGCItemId
#include "SteamDelegateOnStartStopWorkshopItemsPlaytimeTrackingDelegate.h"
#include "CallbackProxyStartStopWorkshopItemsPlaytimeTracking.generated.h"

class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking;

UCLASS(MinimalAPI)
class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnStartStopWorkshopItemsPlaytimeTracking OnSteamInitFailure;
    
    UCallbackProxyStartStopWorkshopItemsPlaytimeTracking();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* SteamWorkshop_StartStopItemsPlaytimeTracking(const TArray<FSteamUGCItemId>& itemIds, bool bStartPlaytimeTracking);
    
};

