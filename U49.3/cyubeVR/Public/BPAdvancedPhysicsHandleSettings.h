#pragma once
#include "CoreMinimal.h"
#include "BPAdvancedPhysicsHandleAxisSettings.h"
#include "BPAdvancedPhysicsHandleSettings.generated.h"

USTRUCT(BlueprintType)
struct FBPAdvancedPhysicsHandleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPAdvancedPhysicsHandleAxisSettings XAxisSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPAdvancedPhysicsHandleAxisSettings YAxisSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPAdvancedPhysicsHandleAxisSettings ZAxisSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPAdvancedPhysicsHandleAxisSettings SlerpSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPAdvancedPhysicsHandleAxisSettings TwistSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPAdvancedPhysicsHandleAxisSettings SwingSettings;
    
    CYUBEVR_API FBPAdvancedPhysicsHandleSettings();
};

