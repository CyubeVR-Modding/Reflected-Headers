#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SpatializationPluginSourceSettingsBase -FallbackName=SpatializationPluginSourceSettingsBase
#include "EIplSpatializationMethod.h"
#include "EIplHrtfInterpolationMethod.h"
#include "PhononSpatializationSourceSettings.generated.h"

UCLASS(EditInlineNew)
class STEAMAUDIO_API UPhononSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    EIplSpatializationMethod SpatializationMethod;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    EIplHrtfInterpolationMethod HrtfInterpolationMethod;
    
    UPhononSpatializationSourceSettings();
};

