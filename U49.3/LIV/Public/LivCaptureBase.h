#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
#include "LivActivationDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "LivCaptureBase.generated.h"

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivCaptureBase : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLivActivationDelegate OnLivCaptureActivated;
    
    UPROPERTY(BlueprintAssignable)
    FLivActivationDelegate OnLivCaptureDeactivated;
    
    ULivCaptureBase();
    UFUNCTION(BlueprintPure)
    bool IsLivCapturing() const;
    
    UFUNCTION(BlueprintPure)
    FMatrix GetClipPlaneTransform() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetClipPlaneLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetClipPlaneForward() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetCameraRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCameraLocation() const;
    
};

