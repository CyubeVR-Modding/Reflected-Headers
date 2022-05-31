#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PhononGeometryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhononGeometryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExportAllChildren;
    
    UPROPERTY(EditAnywhere)
    uint32 NumVertices;
    
    UPROPERTY(EditAnywhere)
    uint32 NumTriangles;
    
    UPhononGeometryComponent();
};

