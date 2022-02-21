#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PaperTerrainActor.generated.h"

class USceneComponent;
class UPaperTerrainSplineComponent;
class UPaperTerrainComponent;

UCLASS()
class PAPER2D_API APaperTerrainActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USceneComponent* DummyRoot;
    
    UPROPERTY(Export)
    UPaperTerrainSplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPaperTerrainComponent* RenderComponent;
    
public:
    APaperTerrainActor();
};

