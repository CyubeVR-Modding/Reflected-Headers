#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EWheelSweepType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VehicleWheel.generated.h"

class UStaticMesh;
class UTireType;
class UTireConfig;
class UWheeledVehicleMovementComponent;

UCLASS(BlueprintType)
class PHYSXVEHICLES_API UVehicleWheel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UStaticMesh* CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bDontCreateShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAdjustCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShapeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShapeWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DampingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectedByHandbrake;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTireType* TireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTireConfig* TireConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LatStiffMaxLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LatStiffValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongStiffValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspensionForceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspensionMaxRaise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspensionMaxDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspensionNaturalFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspensionDampingRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWheelSweepType> SweepType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBrakeTorque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHandBrakeTorque;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UWheeledVehicleMovementComponent* VehicleSim;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 WheelIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DebugLongSlip;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DebugLatSlip;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DebugNormalizedTireLoad;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DebugWheelTorque;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DebugLongForce;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float DebugLatForce;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector OldLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UVehicleWheel();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuspensionOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteerAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationAngle() const;
    
};

