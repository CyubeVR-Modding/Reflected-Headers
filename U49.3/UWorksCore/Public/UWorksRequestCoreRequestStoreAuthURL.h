#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "RequestStoreAuthURLDelegateDelegate.h"
#include "RequestStoreAuthURLMinimalDelegateDelegate.h"
#include "UWorksRequestCoreRequestStoreAuthURL.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreRequestStoreAuthURL : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRequestStoreAuthURLDelegate OnRequestCompleted;
    
    UPROPERTY()
    FRequestStoreAuthURLMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreRequestStoreAuthURL();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

