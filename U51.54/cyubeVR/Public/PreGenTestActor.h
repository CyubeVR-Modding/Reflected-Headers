#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EBlockTypeBP.h"
#include "PreGenTestActor.generated.h"

class UProceduralMeshComponent;

UCLASS(Blueprintable)
class CYUBEVR_API APreGenTestActor : public AActor {
    GENERATED_BODY()
public:
    APreGenTestActor();
    UFUNCTION(BlueprintCallable)
    void SubmitMesh(UProceduralMeshComponent* PMC, const TArray<EBlockTypeBP>& StructureArray, FIntVector StructureSize);
    
    UFUNCTION(BlueprintCallable)
    void GeneratePyramid(TArray<EBlockTypeBP>& StructureArray, FIntVector& StructureSize);
    
};

