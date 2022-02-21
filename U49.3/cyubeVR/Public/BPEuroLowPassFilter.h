#pragma once
#include "CoreMinimal.h"
#include "BPEuroLowPassFilter.generated.h"

USTRUCT(BlueprintType)
struct FBPEuroLowPassFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DeltaCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CutoffSlope;
    
    CYUBEVR_API FBPEuroLowPassFilter();
};

