#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamUGCQueryParameterAll.h"
#include "SteamDelegateOnQueryWorkshopForAllItemsDelegate.h"
#include "CallbackProxyQueryWorkshopForAllItems.generated.h"

class UCallbackProxyQueryWorkshopForAllItems;

UCLASS(Blueprintable, MinimalAPI)
class UCallbackProxyQueryWorkshopForAllItems : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForAllItems OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForAllItems OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamDelegateOnQueryWorkshopForAllItems OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForAllItems();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForAllItems* SteamWorkshop_QueryForAllItems(const FSteamUGCQueryParameterAll& Parameter);
    
};

