#pragma once
#include "CoreMinimal.h"
#include "TrackedGeometryGroup.generated.h"

class AARActor;
class UARTrackedGeometry;
class UARComponent;

USTRUCT()
struct AUGMENTEDREALITY_API FTrackedGeometryGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    AARActor* ARActor;
    
    UPROPERTY(Export)
    UARComponent* ARComponent;
    
    UPROPERTY()
    UARTrackedGeometry* TrackedGeometry;
    
    FTrackedGeometryGroup();
};

