#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectFlexiverbSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectFlexiverbPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectFlexiverbSettings Settings;
    
    USubmixEffectFlexiverbPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectFlexiverbSettings& InSettings);
    
};

