#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BPLowPassPeakFilter.generated.h"

USTRUCT(BlueprintType)
struct FBPLowPassPeakFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VelocitySamples;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVector> VelocitySampleLog;
    
    CYUBEVR_API FBPLowPassPeakFilter();
};

