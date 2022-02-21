#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnQueryWorkshopForUserItemsDelegate.h"
#include "SteamUGCQueryParameterUser.h"
#include "CallbackProxyQueryWorkshopForUserItems.generated.h"

class UCallbackProxyQueryWorkshopForUserItems;

UCLASS(MinimalAPI)
class UCallbackProxyQueryWorkshopForUserItems : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnQueryWorkshopForUserItems OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnQueryWorkshopForUserItems OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnQueryWorkshopForUserItems OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForUserItems();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForUserItems* SteamWorkshop_QueryForUserItems(const FSteamUGCQueryParameterUser& Parameter);
    
};

