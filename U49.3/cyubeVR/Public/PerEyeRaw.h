#pragma once
#include "CoreMinimal.h"
#include "PerEyeRaw.generated.h"

USTRUCT(BlueprintType)
struct FPerEyeRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float pfLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float pfRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float pfTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float pfBottom;
    
    CYUBEVR_API FPerEyeRaw();
};

