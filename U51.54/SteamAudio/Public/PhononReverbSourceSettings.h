#pragma once
#include "CoreMinimal.h"
#include "EIplSimulationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=ReverbPluginSourceSettingsBase -FallbackName=ReverbPluginSourceSettingsBase
#include "PhononReverbSourceSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STEAMAUDIO_API UPhononReverbSourceSettings : public UReverbPluginSourceSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIplSimulationType SourceReverbSimulationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float SourceReverbContribution;
    
    UPhononReverbSourceSettings();
};

