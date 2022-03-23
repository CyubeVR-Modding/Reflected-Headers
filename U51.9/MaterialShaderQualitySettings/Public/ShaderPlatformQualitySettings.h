#pragma once
#include "CoreMinimal.h"
#include "MaterialQualityOverrides.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ShaderPlatformQualitySettings.generated.h"

UCLASS(DefaultConfig, PerObjectConfig)
class MATERIALSHADERQUALITYSETTINGS_API UShaderPlatformQualitySettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialQualityOverrides QualityOverrides[4];
    
    UShaderPlatformQualitySettings();
};

