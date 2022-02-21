#pragma once
#include "CoreMinimal.h"
#include "EPhysicsGripCOMType.h"
#include "EPhysicsGripConstraintType.h"
#include "BPAdvGripPhysicsSettings.generated.h"

USTRUCT(BlueprintType)
struct FBPAdvGripPhysicsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePhysicsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPhysicsGripConstraintType PhysicsConstraintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPhysicsGripCOMType PhysicsGripLocationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTurnOffGravityDuringGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkipSettingSimulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LinearMaxForceCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularMaxForceCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomAngularValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularDamping;
    
    CYUBEVR_API FBPAdvGripPhysicsSettings();
};

