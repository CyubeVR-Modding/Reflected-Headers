#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseRestoreResultDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=InAppPurchaseProductRequest -FallbackName=InAppPurchaseProductRequest
#include "InAppPurchaseRestoreCallbackProxy.generated.h"

class UInAppPurchaseRestoreCallbackProxy;
class APlayerController;

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseRestoreCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInAppPurchaseRestoreResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInAppPurchaseRestoreResult OnFailure;
    
    UInAppPurchaseRestoreCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, APlayerController* PlayerController);
    
};
