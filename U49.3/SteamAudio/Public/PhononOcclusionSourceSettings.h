#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=OcclusionPluginSourceSettingsBase -FallbackName=OcclusionPluginSourceSettingsBase
#include "EIplDirectOcclusionMethod.h"
#include "EIplDirectOcclusionMode.h"
#include "PhononOcclusionSourceSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class STEAMAUDIO_API UPhononOcclusionSourceSettings : public UOcclusionPluginSourceSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIplDirectOcclusionMode DirectOcclusionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIplDirectOcclusionMethod DirectOcclusionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirectOcclusionSourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DirectAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AirAbsorption;
    
    UPhononOcclusionSourceSettings();
};

