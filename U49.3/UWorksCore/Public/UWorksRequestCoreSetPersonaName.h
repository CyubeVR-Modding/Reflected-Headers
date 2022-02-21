#pragma once
#include "CoreMinimal.h"
#include "UWorksRequestCore.h"
#include "SetPersonaNameDelegateDelegate.h"
#include "SetPersonaNameMinimalDelegateDelegate.h"
#include "EUWorksResult.h"
#include "UWorksRequestCoreSetPersonaName.generated.h"

UCLASS(BlueprintType)
class UWORKSCORE_API UUWorksRequestCoreSetPersonaName : public UUWorksRequestCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSetPersonaNameDelegate OnRequestCompleted;
    
    UPROPERTY()
    FSetPersonaNameMinimalDelegate OnRequestCompletedMinimal;
    
    UUWorksRequestCoreSetPersonaName();
    UFUNCTION(BlueprintCallable)
    void SetInput(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintPure)
    void GetOutput(bool& bSuccess, bool& bLocalSuccess, EUWorksResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

