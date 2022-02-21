#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EVRRotationQuantization.h"
#include "EVRVectorQuantization.h"
#include "BPVRComponentPosRep.generated.h"

USTRUCT(BlueprintType)
struct FBPVRComponentPosRep {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector Position;
    
    UPROPERTY(Transient)
    FRotator Rotation;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    EVRVectorQuantization QuantizationLevel;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    EVRRotationQuantization RotationQuantizationLevel;
    
    CYUBEVR_API FBPVRComponentPosRep();
};

