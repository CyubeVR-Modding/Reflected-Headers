#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnQueryWorkshopForAllItemsDelegate.h"
#include "SteamUGCQueryParameterAll.h"
#include "CallbackProxyQueryWorkshopForAllItems.generated.h"

class UCallbackProxyQueryWorkshopForAllItems;

UCLASS(MinimalAPI)
class UCallbackProxyQueryWorkshopForAllItems : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnQueryWorkshopForAllItems OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnQueryWorkshopForAllItems OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnQueryWorkshopForAllItems OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForAllItems();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForAllItems* SteamWorkshop_QueryForAllItems(const FSteamUGCQueryParameterAll& Parameter);
    
};

