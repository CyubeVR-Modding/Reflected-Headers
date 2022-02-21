#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectReverbPluginSettings.h"
#include "SubmixEffectReverbPluginPreset.generated.h"

UCLASS(EditInlineNew)
class USubmixEffectReverbPluginPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSubmixEffectReverbPluginSettings Settings;
    
    USubmixEffectReverbPluginPreset();
};

