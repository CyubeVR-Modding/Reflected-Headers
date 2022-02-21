#pragma once
#include "CoreMinimal.h"
#include "EUWorksControllerSourceMode.h"
#include "UWorksControllerAnalogActionData.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksControllerAnalogActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EUWorksControllerSourceMode Mode;
    
    UPROPERTY(BlueprintReadWrite)
    float X;
    
    UPROPERTY(BlueprintReadWrite)
    float Y;
    
    UPROPERTY(BlueprintReadWrite)
    bool bActive;
    
    FUWorksControllerAnalogActionData();
};

