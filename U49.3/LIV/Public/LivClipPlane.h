#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "LivClipPlane.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivClipPlane : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UMaterialInterface* ClipPlaneMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ClipPlaneDebugMaterial;
    
    ULivClipPlane();
    UFUNCTION(BlueprintCallable)
    void SetDebugEnabled(bool bDebugEnabled);
    
    UFUNCTION(BlueprintPure)
    bool GetDebugEnabled() const;
    
};

