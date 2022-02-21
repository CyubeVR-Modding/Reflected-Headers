#pragma once
#include "CoreMinimal.h"
#include "BPAdvGripPhysicsSettings.h"
#include "BPAdvGripSettings.generated.h"

USTRUCT(BlueprintType)
struct FBPAdvGripSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 GripPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSetOwnerOnGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPAdvGripPhysicsSettings PhysicsSettings;
    
    CYUBEVR_API FBPAdvGripSettings();
};

