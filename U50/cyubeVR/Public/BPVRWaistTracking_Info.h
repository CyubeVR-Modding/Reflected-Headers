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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RestingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaistRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBPVRWaistTrackingMode TrackingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TrackedDevice;
    
    CYUBEVR_API FBPVRWaistTracking_Info();
};

