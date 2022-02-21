#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BlockInfoBP.h"
#include "EBlockTypeBP.h"
#include "ModifiedBlockActor.generated.h"

class UMaterialInstance;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class AChunkManager;

UCLASS()
class CYUBEVR_API AModifiedBlockActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWasUsedForMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* GlassMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* MaterialInstanceForDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UStaticMeshComponent* BlockMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AChunkManager* ChunkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlockTypeBP BlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlockInfoBP OriginalBlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsForMove;
    
    AModifiedBlockActor();
    UFUNCTION(BlueprintCallable)
    void UpdateMaterialInstanceValuesDefaultLighting();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMaterialInstanceValues();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDestructionAmount();
    
    UFUNCTION(BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION(BlueprintCallable)
    void ResetToPool();
    
    UFUNCTION(BlueprintCallable)
    void MarkDestroyed(bool WasFullyMined);
    
    UFUNCTION(BlueprintCallable)
    void MarkActiveAgain();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMaterialInstance();
    
    UFUNCTION(BlueprintNativeEvent)
    void DamageCPP(float Amount, EBlockTypeBP ToolType);
    
    UFUNCTION(BlueprintCallable)
    void ConvertToForMove();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAllowSpawnItemsForBlock();
    
};

