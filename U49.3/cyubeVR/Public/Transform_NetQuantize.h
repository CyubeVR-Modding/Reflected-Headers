#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Transform_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct FTransform_NetQuantize : public FTransform {
    GENERATED_BODY()
public:
    CYUBEVR_API FTransform_NetQuantize();
};

