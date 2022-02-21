#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "SteamDelegateOnQueryWorkshopForItemDetailsDelegate.h"
#include "SteamUGCQueryParameterDetails.h"
#include "CallbackProxyQueryWorkshopForItemDetails.generated.h"

class UCallbackProxyQueryWorkshopForItemDetails;

UCLASS(MinimalAPI)
class UCallbackProxyQueryWorkshopForItemDetails : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnQueryWorkshopForItemDetails OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnQueryWorkshopForItemDetails OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FSteamDelegateOnQueryWorkshopForItemDetails OnSteamInitFailure;
    
    UCallbackProxyQueryWorkshopForItemDetails();
    UFUNCTION(BlueprintCallable)
    static UCallbackProxyQueryWorkshopForItemDetails* SteamWorkshop_QueryForItemDetails(const FSteamUGCQueryParameterDetails& Parameter);
    
};

