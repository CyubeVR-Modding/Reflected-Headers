#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "CustomAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CYUBEVR_API UCustomAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UCustomAudioComponent();
};

