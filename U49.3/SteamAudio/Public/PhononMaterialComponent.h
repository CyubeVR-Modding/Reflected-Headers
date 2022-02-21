#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPhononMaterial.h"
#include "PhononMaterialComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPhononMaterialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MaterialIndex;
    
    UPROPERTY(EditAnywhere)
    EPhononMaterial MaterialPreset;
    
    UPROPERTY(EditAnywhere)
    float LowFreqAbsorption;
    
    UPROPERTY(EditAnywhere)
    float MidFreqAbsorption;
    
    UPROPERTY(EditAnywhere)
    float HighFreqAbsorption;
    
    UPROPERTY(EditAnywhere)
    float LowFreqTransmission;
    
    UPROPERTY(EditAnywhere)
    float MidFreqTransmission;
    
    UPROPERTY(EditAnywhere)
    float HighFreqTransmission;
    
    UPROPERTY(EditAnywhere)
    float Scattering;
    
    UPhononMaterialComponent();
};

