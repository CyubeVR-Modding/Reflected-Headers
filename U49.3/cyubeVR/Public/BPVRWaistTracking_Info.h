#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EBPVRWaistTrackingMode.h"
#include "BPVRWaistTracking_Info.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FBPVRWaistTracking_Info {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RestingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaistRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBPVRWaistTrackingMode TrackingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPrimitiveComponent* TrackedDevice;
    
    CYUBEVR_API FBPVRWaistTracking_Info();
};

