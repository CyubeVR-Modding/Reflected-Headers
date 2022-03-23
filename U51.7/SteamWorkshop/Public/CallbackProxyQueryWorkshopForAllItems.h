#pragma once
#include "CoreMinimal.h"
#include "SteamDelegateOnQueryWorkshopForAllItemsDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamUGCQueryParameterAll.h"
#include "CallbackProxyQueryWorkshopForAllItems.generated.h"

class UCallbackProxyQueryWorkshopForAllItems;

UCLASS(MinimalAPI)
class UCallbackProxyQueryWorkshopForAllItems : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForAllItems OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForAllItems OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForAllItems OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForAllItems();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForAllItems* SteamWorkshop_QueryForAllItems(const FSteamUGCQueryParameterAll& Parameter);
    
};

