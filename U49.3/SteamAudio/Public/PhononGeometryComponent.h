#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PhononGeometryComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPhononGeometryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool ExportAllChildren;
    
    UPROPERTY(VisibleAnywhere)
    uint32 NumVertices;
    
    UPROPERTY(VisibleAnywhere)
    uint32 NumTriangles;
    
    UPhononGeometryComponent();
};

