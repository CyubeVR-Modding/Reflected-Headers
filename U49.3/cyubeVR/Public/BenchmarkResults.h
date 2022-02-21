#pragma once
#include "CoreMinimal.h"
#include "BenchmarkResults.generated.h"

USTRUCT(BlueprintType)
struct FBenchmarkResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AverageFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AverageFrametime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Low1Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Low01Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ActiveRendering;
    
    CYUBEVR_API FBenchmarkResults();
};

