#pragma once
#include "CoreMinimal.h"
#include "UWorksControllerDigitalActionData.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksControllerDigitalActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bState;
    
    UPROPERTY(BlueprintReadWrite)
    bool bActive;
    
    FUWorksControllerDigitalActionData();
};

