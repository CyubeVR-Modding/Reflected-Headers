#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenDescription.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "LoadingScreenSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class LOADINGSCREEN_API ULoadingScreenSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FLoadingScreenDescription StartupScreen;
    
    UPROPERTY(Config, EditAnywhere)
    FLoadingScreenDescription DefaultScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FSlateFontInfo TipFont;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float TipWrapAt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TArray<FText> Tips;
    
    ULoadingScreenSettings();
};

