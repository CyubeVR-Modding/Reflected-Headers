#pragma once
#include "CoreMinimal.h"
#include "ReplicatedVehicleState.generated.h"

USTRUCT(BlueprintType)
struct PHYSXVEHICLES_API FReplicatedVehicleState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SteeringInput;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float BrakeInput;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float HandbrakeInput;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CurrentGear;
    
    FReplicatedVehicleState();
};

