#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundWaveProcedural -FallbackName=SoundWaveProcedural
#include "SynthSound.generated.h"

class USynthComponent;

UCLASS(EditInlineNew)
class AUDIOMIXER_API USynthSound : public USoundWaveProcedural {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USynthComponent* OwningSynthComponent;
    
public:
    USynthSound();
};

