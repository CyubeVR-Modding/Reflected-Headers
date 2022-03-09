#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RepMovement -FallbackName=RepMovement
#include "RepMovementVR.generated.h"

USTRUCT()
struct FRepMovementVR : public FRepMovement {
    GENERATED_BODY()
public:
    CYUBEVR_API FRepMovementVR();
};

