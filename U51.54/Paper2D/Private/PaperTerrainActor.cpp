#include "PaperTerrainActor.h"
#include "PaperTerrainSplineComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PaperTerrainComponent.h"

APaperTerrainActor::APaperTerrainActor() {
    this->DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SplineComponent = CreateDefaultSubobject<UPaperTerrainSplineComponent>(TEXT("SplineComponent"));
    this->RenderComponent = CreateDefaultSubobject<UPaperTerrainComponent>(TEXT("RenderComponent"));
}

