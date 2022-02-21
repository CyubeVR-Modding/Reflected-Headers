#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureGlobalClipPlaneNoPostProcess.generated.h"

class UTextureRenderTarget2D;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureGlobalClipPlaneNoPostProcess : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* BackgroundRenderTarget;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* ForegroundRenderTarget;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* ForegroundMaskedRenderTarget;
    
    ULivCaptureGlobalClipPlaneNoPostProcess();
};

