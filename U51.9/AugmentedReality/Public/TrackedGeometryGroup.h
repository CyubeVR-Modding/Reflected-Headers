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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    AARActor* ARActor;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UARComponent* ARComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UARTrackedGeometry* TrackedGeometry;
    
    FTrackedGeometryGroup();
};

