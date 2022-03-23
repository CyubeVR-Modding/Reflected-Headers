#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "LivClipPlane.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class LIV_API ULivClipPlane : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ClipPlaneMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ClipPlaneDebugMaterial;
    
    ULivClipPlane();
    UFUNCTION(BlueprintCallable)
    void SetDebugEnabled(bool bDebugEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugEnabled() const;
    
};

