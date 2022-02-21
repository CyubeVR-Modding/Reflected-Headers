#pragma once
#include "CoreMinimal.h"
#include "GetServersAtAddressDelegateDelegate.h"
#include "UWorksRequestWeb.h"
#include "GetServersAtAddressMinimalDelegateDelegate.h"
#include "UWorksRequestWebGetServersAtAddress.generated.h"

UCLASS()
class UWORKSWEB_API UUWorksRequestWebGetServersAtAddress : public UUWorksRequestWeb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetServersAtAddressDelegate OnRequestCompleted;
    
    UPROPERTY()
    FGetServersAtAddressMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestWebGetServersAtAddress();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Addr);
    
    UFUNCTION(BlueprintCallable)
    void GetOutput(FString& Content);
    
};

