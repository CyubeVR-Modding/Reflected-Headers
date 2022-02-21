#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "LivWorldSubsystem.generated.h"

class USceneComponent;
class ULivCaptureBase;

UCLASS(BlueprintType)
class LIV_API ULivWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    USceneComponent* CameraRoot;
    
    UPROPERTY(Export, Transient)
    ULivCaptureBase* CaptureComponent;
    
public:
    ULivWorldSubsystem();
    UFUNCTION(BlueprintPure)
    FTransform GetTrackingOriginTransform() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ULivCaptureBase> GetCaptureComponentClass() const;
    
    UFUNCTION(BlueprintPure)
    ULivCaptureBase* GetCaptureComponent() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetCameraRoot() const;
    
};

