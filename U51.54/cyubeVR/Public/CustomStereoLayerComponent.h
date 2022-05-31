#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StereoLayerComponent -FallbackName=StereoLayerComponent
#include "CustomStereoLayerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CYUBEVR_API UCustomStereoLayerComponent : public UStereoLayerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoDestroy;
    
    UCustomStereoLayerComponent();
    UFUNCTION(BlueprintCallable)
    void UseOldLayerId();
    
    UFUNCTION(BlueprintCallable)
    void MarkDirty();
    
    UFUNCTION(BlueprintCallable)
    void ManualDestroy();
    
};

