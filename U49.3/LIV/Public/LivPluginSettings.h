#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "LivPluginSettings.generated.h"

class ULivCaptureBase;

UCLASS(DefaultConfig)
class LIV_API ULivPluginSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<ULivCaptureBase> CaptureMethod;
    
    UPROPERTY(Config, EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    ULivPluginSettings();
};

