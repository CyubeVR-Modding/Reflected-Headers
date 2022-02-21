#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ESpriteCollisionMode.h"
#include "PaperTerrainComponent.generated.h"

class UPaperTerrainMaterial;
class UPaperTerrainSplineComponent;
class UBodySetup;

UCLASS(meta=(BlueprintSpawnableComponent))
class PAPER2D_API UPaperTerrainComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPaperTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bClosedSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFilledSpline;
    
    UPROPERTY(Export)
    UPaperTerrainSplineComponent* AssociatedSpline;
    
    UPROPERTY(EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(EditAnywhere)
    float SegmentOverlapAmount;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FLinearColor TerrainColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 ReparamStepsPerSegment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* CachedBodySetup;
    
public:
    UPaperTerrainComponent();
    UFUNCTION(BlueprintCallable)
    void SetTerrainColor(FLinearColor NewColor);
    
};

