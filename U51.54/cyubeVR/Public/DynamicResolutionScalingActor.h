#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DynamicResolutionScalingActor.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API ADynamicResolutionScalingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DynamicResolutionScalingActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DynamicResolutionScalingActiveNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DynamicResolutionScalingActiveInt;
    
    ADynamicResolutionScalingActor();
    UFUNCTION(BlueprintCallable)
    static bool IsHighEndGPU();
    
};

