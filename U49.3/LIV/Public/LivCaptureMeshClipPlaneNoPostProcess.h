#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureMeshClipPlaneNoPostProcess.generated.h"

class ULivClipPlane;
class UTextureRenderTarget2D;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureMeshClipPlaneNoPostProcess : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    ULivClipPlane* CameraClipPlane;
    
    UPROPERTY(EditAnywhere, Export)
    ULivClipPlane* FloorClipPlane;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* BackgroundRenderTarget;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* ForegroundRenderTarget;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* ForegroundOutputRenderTarget;
    
    ULivCaptureMeshClipPlaneNoPostProcess();
};

