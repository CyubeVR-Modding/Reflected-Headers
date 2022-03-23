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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EIplSpatializationMethod SpatializationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EIplHrtfInterpolationMethod HrtfInterpolationMethod;
    
    UPhononSpatializationSourceSettings();
};

