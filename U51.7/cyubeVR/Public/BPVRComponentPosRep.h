#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EVRRotationQuantization.h"
#include "EVRVectorQuantization.h"
#include "BPVRComponentPosRep.generated.h"

USTRUCT(BlueprintType)
struct FBPVRComponentPosRep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EVRVectorQuantization QuantizationLevel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EVRRotationQuantization RotationQuantizationLevel;
    
    CYUBEVR_API FBPVRComponentPosRep();
};
