#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "GripComponentEndPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FGripComponentEndPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    CYUBEVR_API FGripComponentEndPhysicsTickFunction();
};

