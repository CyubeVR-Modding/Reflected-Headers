#pragma once
#include "CoreMinimal.h"
#include "ETreeType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RuntimeTree.generated.h"

class AChunkManager;
class UProceduralMeshComponent;
class UStaticMesh;

UCLASS()
class CYUBEVR_API ARuntimeTree : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETreeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool damaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UProceduralMeshComponent* PMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* StaticMeshReference;
    
    ARuntimeTree();
    UFUNCTION(BlueprintCallable)
    void SpawnLogs(UProceduralMeshComponent* CutNew);
    
    UFUNCTION(BlueprintCallable)
    void SetupWind(int32 From, int32 To);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive();
    
    UFUNCTION(BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION(BlueprintCallable)
    void RegisterToolHit(FVector Location, bool& NowFall);
    
};

