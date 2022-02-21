#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
#include "ReceiveLightActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "BlockItem.generated.h"

class UParticleSystemComponent;
class UMaterialInstanceDynamic;
class UTextRenderComponent;
class UBoxComponent;
class ABlockItem;
class AChunkManager;

UCLASS()
class CYUBEVR_API ABlockItem : public AReceiveLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlockTypeBP BlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor CrystalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChargeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LastRechargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MeltAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoadedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBlockTypeBP CurrentResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ABlockItem*> AttachedItemsC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UTextRenderComponent*> TextAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsChestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpecialCosmeticItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* CrystalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UParticleSystemComponent* ChargingParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Debug_LastPhysicsEnableFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Debug_LastPhysicsEnableFromTime;
    
    ABlockItem();
    UFUNCTION(BlueprintCallable)
    static void WriteLastRecipeToDisk();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateItemType(EBlockTypeBP NewType, int32 NewUniqueID, AChunkManager* ChunkManager);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugLastPhysicsEnable(const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetCrystalProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveFromOverlap();
    
    UFUNCTION(BlueprintCallable)
    float GetHealthReduceOnFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FullyChargedNow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FullUpdate(int32 Amount, EBlockTypeBP NewType, int32 NewUniqueID, bool DirectFromLoad);
    
    UFUNCTION(BlueprintCallable)
    void DestroyToPool(const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void CheckRemove(ABlockItem* RemovedItem, TArray<ABlockItem*>& NeedRemoveToo, bool& AllowRemove);
    
    UFUNCTION(BlueprintCallable)
    void CheckItems(bool& success, EBlockTypeBP& Result, int32& Amount, int32& OutUniqueID);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeLitOnFire();
    
    UFUNCTION(BlueprintCallable)
    void AllowRelease(bool& Allow);
    
};

