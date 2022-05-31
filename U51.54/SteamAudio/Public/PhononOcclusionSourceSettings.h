#pragma once
#include "CoreMinimal.h"
#include "EIplDirectOcclusionMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=OcclusionPluginSourceSettingsBase -FallbackName=OcclusionPluginSourceSettingsBase
#include "EIplDirectOcclusionMethod.h"
#include "PhononOcclusionSourceSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STEAMAUDIO_API UPhononOcclusionSourceSettings : public UOcclusionPluginSourceSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIplDirectOcclusionMode DirectOcclusionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIplDirectOcclusionMethod DirectOcclusionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectOcclusionSourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DirectAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AirAbsorption;
    
    UPhononOcclusionSourceSettings();
};

