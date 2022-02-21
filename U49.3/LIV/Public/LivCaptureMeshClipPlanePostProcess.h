#pragma once
#include "CoreMinimal.h"
#include "LivCaptureBase.h"
#include "LivCaptureMeshClipPlanePostProcess.generated.h"

class ULivClipPlane;
class USceneCaptureComponent2D;
class UTextureRenderTarget2D;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureMeshClipPlanePostProcess : public ULivCaptureBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient, VisibleAnywhere)
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(EditAnywhere, Export)
    ULivClipPlane* CameraClipPlane;
    
    UPROPERTY(EditAnywhere, Export)
    ULivClipPlane* FloorClipPlane;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    UTextureRenderTarget2D* PostProcessedSceneRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    UTextureRenderTarget2D* BackgroundDepthRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    UTextureRenderTarget2D* ForegroundDepthRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    UTextureRenderTarget2D* BackgroundOutputRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    UTextureRenderTarget2D* ForegroundOutputRenderTarget;
    
    ULivCaptureMeshClipPlanePostProcess();
};

