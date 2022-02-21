#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureGlobalClipPlanePostProcess.generated.h"

class USceneCaptureComponent2D;
class UTextureRenderTarget2D;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureGlobalClipPlanePostProcess : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* PostProcessedBackgroundRenderTarget;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* PostProcessedForegroundRenderTarget;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* ForegroundInverseOpacityRenderTarget;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* ForegroundOutputRenderTarget;
    
    ULivCaptureGlobalClipPlanePostProcess();
};

