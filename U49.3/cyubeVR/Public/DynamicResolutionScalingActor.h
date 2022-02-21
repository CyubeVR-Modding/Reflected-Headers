#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DynamicResolutionScalingActor.generated.h"

UCLASS()
class CYUBEVR_API ADynamicResolutionScalingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool DynamicResolutionScalingActive;
    
    UPROPERTY(EditAnywhere)
    bool DynamicResolutionScalingActiveNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DynamicResolutionScalingActiveInt;
    
    ADynamicResolutionScalingActor();
    UFUNCTION(BlueprintCallable)
    static bool IsHighEndGPU();
    
};

