#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "PingDelegateDelegate.h"
#include "PingMinimalDelegateDelegate.h"
#include "UWorksServerInfo.h"
#include "UWorksRequestCorePing.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCorePing : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPingDelegate OnRequestCompleted;
    
    UPROPERTY()
    FPingMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCorePing();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& IP, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FUWorksServerInfo& Server);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

