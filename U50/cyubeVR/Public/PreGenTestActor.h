#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "PreGenTestActor.generated.h"

class UProceduralMeshComponent;

UCLASS()
class CYUBEVR_API APreGenTestActor : public AActor {
    GENERATED_BODY()
public:
    APreGenTestActor();
    UFUNCTION(BlueprintCallable)
    void SubmitMesh(UProceduralMeshComponent* PMC, const TArray<EBlockTypeBP>& StructureArray, FIntVector StructureSize);
    
    UFUNCTION(BlueprintCallable)
    void GeneratePyramid(TArray<EBlockTypeBP>& StructureArray, FIntVector& StructureSize);
    
};

