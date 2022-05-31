#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PaperTerrainActor.generated.h"

class UPaperTerrainSplineComponent;
class USceneComponent;
class UPaperTerrainComponent;

UCLASS(Blueprintable)
class PAPER2D_API APaperTerrainActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* DummyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPaperTerrainSplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPaperTerrainComponent* RenderComponent;
    
public:
    APaperTerrainActor();
};

