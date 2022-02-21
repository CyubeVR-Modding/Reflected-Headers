#pragma once
#include "CoreMinimal.h"
#include "UWorksControllerMotionData.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksControllerMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float RotQuatX;
    
    UPROPERTY(BlueprintReadWrite)
    float RotQuatY;
    
    UPROPERTY(BlueprintReadWrite)
    float RotQuatZ;
    
    UPROPERTY(BlueprintReadWrite)
    float RotQuatW;
    
    UPROPERTY(BlueprintReadWrite)
    float PosAccelX;
    
    UPROPERTY(BlueprintReadWrite)
    float PosAccelY;
    
    UPROPERTY(BlueprintReadWrite)
    float PosAccelZ;
    
    UPROPERTY(BlueprintReadWrite)
    float RotVelX;
    
    UPROPERTY(BlueprintReadWrite)
    float RotVelY;
    
    UPROPERTY(BlueprintReadWrite)
    float RotVelZ;
    
    FUWorksControllerMotionData();
};

