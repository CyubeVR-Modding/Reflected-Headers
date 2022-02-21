#pragma once
#include "CoreMinimal.h"
#include "BPAdvancedPhysicsHandleAxisSettings.generated.h"

USTRUCT(BlueprintType)
struct FBPAdvancedPhysicsHandleAxisSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxForceCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnablePositionDrive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableVelocityDrive;
    
    CYUBEVR_API FBPAdvancedPhysicsHandleAxisSettings();
};

