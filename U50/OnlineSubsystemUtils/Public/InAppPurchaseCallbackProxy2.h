#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseProductRequest2.h"
#include "InAppPurchaseResult2Delegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseCallbackProxy2.generated.h"

class UInAppPurchaseCallbackProxy2;
class APlayerController;

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseCallbackProxy2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInAppPurchaseResult2 OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInAppPurchaseResult2 OnFailure;
    
    UInAppPurchaseCallbackProxy2();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest2& ProductRequest);
    
};

