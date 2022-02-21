#pragma once
#include "CoreMinimal.h"
#include "EMeshObjectType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "SideBP.h"
#include "EBlockTypeBP.h"
#include "ModifiedBlockActorToSpawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ETreeType.h"
#include "ChunkAboutBP.h"
#include "EItemClass.h"
#include "BlockInfoBP.h"
#include "ETreeClass.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBiome.h"
#include "ERotation.h"
#include "ChunkManager.generated.h"

class AInventory;
class UParticleSystem;
class UMaterialParameterCollection;
class ABlockItem;
class ATreeManager;
class USoundBase;
class ADirectionalLight;
class AMeshObject;
class AAudioManager;
class AWeatherManager;
class UMaterialInterface;
class UDataTable;
class UStaticMesh;
class ADraftUnlockingPaper;
class AModifiedBlockActor;
class ADeathBeacon;

UCLASS()
class CYUBEVR_API AChunkManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceKnucklesControls;
    
    UPROPERTY()
    TArray<ABlockItem*> BlockItemPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InitialLoadFinished;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ViewDistanceByINI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoAnything;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DevMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DevModeLoadWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BenchmarkDevMode;
    
    UPROPERTY(EditAnywhere)
    int32 N_Type;
    
    UPROPERTY(EditAnywhere)
    int32 N_Octaves;
    
    UPROPERTY(EditAnywhere)
    float N_Frequency;
    
    UPROPERTY(EditAnywhere)
    float N_Lacunarity;
    
    UPROPERTY(EditAnywhere)
    float N_Gain;
    
    UPROPERTY(EditAnywhere)
    float N_Scale;
    
    UPROPERTY(EditAnywhere)
    int32 N_Interp;
    
    UPROPERTY(EditAnywhere)
    int32 N_FracType;
    
    UPROPERTY(EditAnywhere)
    int32 N_Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* DeerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* RabbitClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* MonitorLizardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* GeckoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* TorchClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* TorchStandingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* TorchRespawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* DeathBeaconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* BlockItemBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* TreeBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* CactusBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* DesertGrassBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* LogBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* ModifiedBlockActorBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialParameterCollection* FogParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* TreeEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* CustomAudioComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* EasterEggClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* SphereActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ATreeManager* TreeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* WorldTrackingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* NavMeshBoundsVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBlockTypeBP, EBlockTypeBP> ItemToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBlockTypeBP, int32> AmountToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBlockTypeBP, USoundBase*> MiningHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBlockTypeBP, USoundBase*> MiningEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBlockTypeBP, USoundBase*> BlockSpawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBlockTypeBP, UClass*> MeshObjectsTypeToClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SkyIsDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RecordingDevMode;
    
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* FogParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool PlayerNeedsPositionUpdateAfterLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ADirectionalLight* Sun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AAudioManager* AudioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AWeatherManager* WeatherManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TableMiningDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TableMiningAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TableMiningParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TableMiningParticleHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TableMiningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TableHitSoundHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TableHitSoundLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBlockTypeBP> RecipeUnlockOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* FoliageGrassMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* FoliageLeavesMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* BirdMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* ChunkMatRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* ChunkMatGlass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* ChunkMatWaterRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* GrassMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* MeshObjectPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* ChunkMatLODRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* ChunkMatLODFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* ChunkMatLODWRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* ChunkMatLODWRegularFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* ChunkMatLODWFade;
    
    AChunkManager();
    UFUNCTION(BlueprintNativeEvent)
    void UpdateSkyEvent(float NewTimeOfDay);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLightValueForActorImmediateGT(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void UnlockedDraftNew(ADraftUnlockingPaper* UnlockedActor);
    
    UFUNCTION(BlueprintCallable)
    void TestFunction();
    
    UFUNCTION(BlueprintCallable)
    TArray<AModifiedBlockActor*> SpawnModifiedBlockActorsAndInit(const TArray<FModifiedBlockActorToSpawn>& SpawnInfos, EBlockTypeBP ToolType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ADraftUnlockingPaper* SpawnDraftUnlocker(FVector Location, EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable)
    ADeathBeacon* SpawnDeathBeacon(FVector WorldLocation, bool FirstSpawn);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBlockItem(EBlockTypeBP Type, int32 UniqueId, FVector WorldLocation, FRotator WorldRotation);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldCharacterFall(FVector FloorLocation);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetDevRecordingMode();
    
    UFUNCTION(BlueprintCallable)
    void SetBlockItemsNeedToOverlapHand(bool bNeedToOverlap);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTreeAtLocation(const FVector WorldLocation, ETreeType Type, AActor* Tree, bool& Valid);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDeathBeaconAtLocation(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlockFinal(FBlockInfoBP BlockInfo, bool& AboveRemoved, FVector& AboveLocation, EBlockTypeBP& Type);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlockAtLocation(const FVector Location, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, FBlockInfoBP& BlockInfo, AModifiedBlockActor*& ExistingModifiedBlockActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllBirds();
    
    UFUNCTION(BlueprintCallable)
    void RegisterMeshObject(EBlockTypeBP Type, AMeshObject* MeshObject, bool& success);
    
    UFUNCTION(BlueprintPure)
    FIntVector RealWorldToAbsoluteWorldInt(FVector RealWorld);
    
    UFUNCTION(BlueprintCallable)
    void PrintToLogBP(const FString& Text);
    
    UFUNCTION(BlueprintNativeEvent)
    bool MovePlayerToStartLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void MovePlayerToRespawnLocation(FVector CameraOffset, bool& FoundRespawnTorch);
    
    UFUNCTION(BlueprintPure)
    bool IsWaitingForNewOrigin();
    
    UFUNCTION(BlueprintPure)
    static bool IsTorchType(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintPure)
    static void IsToolCausingAreaDamage(EBlockTypeBP Type, bool& AreaDamage);
    
    UFUNCTION(BlueprintCallable)
    bool IsRespawnTorchActive(FVector WorldLocation);
    
    UFUNCTION(BlueprintPure)
    bool IsRecipeUnlocked(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintPure)
    static bool IsFoliageType(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintPure)
    void IsFirstWorldLoad(bool& _DevMode, bool& _DevModeLoadWorld);
    
    UFUNCTION(BlueprintPure)
    static bool IsDyeType(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable)
    void HitBlockWithArrow(const FVector Location, EBlockTypeBP& HitType, bool& Valid);
    
    UFUNCTION(BlueprintNativeEvent)
    void HaveUnlockedAllRecipes();
    
    UFUNCTION(BlueprintCallable)
    void GetWorldSomething();
    
    UFUNCTION(BlueprintCallable)
    static void GetTreeClass(ETreeType Type, ETreeClass& ItemClass);
    
    UFUNCTION(BlueprintPure)
    static EBlockTypeBP GetTorchForDye(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintPure)
    static FColor GetTorchColor(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintPure)
    static void GetTextureIndexStatic(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index);
    
    UFUNCTION(BlueprintPure)
    void GetTextureIndex(const EBlockTypeBP Type, int32 UniqueId, SideBP Side, float& Index);
    
    UFUNCTION(BlueprintCallable)
    void GetNewBlockItem(FTransform NewTransform, ABlockItem*& NewBlockItem, bool ActivatePhysics);
    
    UFUNCTION(BlueprintCallable)
    USoundBase* GetMiningSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetMiningParticleHoldForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetMiningParticleForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetMiningDamageForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& Damage);
    
    UFUNCTION(BlueprintCallable)
    void GetMiningAmountForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool& Result, float& AmountFloat, int32& AmountRound);
    
    UFUNCTION(BlueprintCallable)
    static void GetMeshObjectType(EBlockTypeBP Type, EMeshObjectType& MeshObjectType);
    
    UFUNCTION(BlueprintCallable)
    static void GetItemClass(EBlockTypeBP Type, EItemClass& ItemClass, bool& CanExistAsItem);
    
    UFUNCTION(BlueprintCallable)
    USoundBase* GetHitSoundForBlockAndTool(EBlockTypeBP Type, EBlockTypeBP Tool, bool HardHit, bool& Result);
    
    UFUNCTION(BlueprintPure)
    static EBlockTypeBP GetDyeForFlower(EBlockTypeBP Type);
    
    UFUNCTION(BlueprintPure)
    void GetDevModeBP(bool& _DevMode, bool& _DevModeLoadWorld);
    
    UFUNCTION(BlueprintCallable)
    void GetChunkWorldFormatAtLocation(const FVector& Location, int32& ChunkWorldFormat, int32& ChunkID);
    
    UFUNCTION(BlueprintCallable)
    void GetBlockBelowPlayer(FVector CameraLocation, EBlockTypeBP& BlockType);
    
    UFUNCTION(BlueprintCallable)
    void GetBlockAtLocation(FVector Location, EBlockTypeBP& Type, int32& UniqueId, FChunkAboutBP& Chunk);
    
    UFUNCTION(BlueprintCallable)
    void GetBiomeAtLocation(FVector Location, EBiome& BiomeType, FChunkAboutBP& Chunk);
    
    UFUNCTION(BlueprintCallable)
    FIntVector GetAbsolutePlayerCameraLocation();
    
    UFUNCTION(BlueprintCallable)
    static void FindExistingWorldData(TArray<FString>& Names, TArray<int32>& Seeds, bool& success);
    
    UFUNCTION(BlueprintCallable)
    float FindDistanceToClosestBlock(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void EndWorld();
    
    UFUNCTION(BlueprintCallable)
    bool DoesRespawnTorchExist(int32& Amount);
    
    UFUNCTION(BlueprintCallable)
    bool DidAlreadyCollectEasterEggAtLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void DestroyBlockItem(ABlockItem* BlockItem, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteWorld(const FString& WorldName);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllFreeCrystals();
    
    UFUNCTION(BlueprintCallable)
    void DamageBlockAtLocation(const FVector Location, const float Damage, EBlockTypeBP& Type, int32& UniqueId, bool& Valid, bool& NeedSpawnBlockActor, AModifiedBlockActor*& ExistingModifiedBlockActor, FBlockInfoBP& BlockInfo);
    
    UFUNCTION(BlueprintCallable)
    void CollectEasterEggAtLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    float CheckLoadingPercentage();
    
    UFUNCTION(BlueprintCallable)
    void CheckItemNotPartOfBlockItemPool(const ABlockItem* BlockItem);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTorchColorAtLocation(FVector Location, EBlockTypeBP NewTorchType);
    
    UFUNCTION(BlueprintCallable)
    void CanStandAtLocation(FVector Location, bool& CanStand);
    
    UFUNCTION(BlueprintCallable)
    void CanSmoothLocoToLocation(FVector Location, bool& CanStand);
    
    UFUNCTION(BlueprintCallable)
    void CanMoveBlockAtLocation(FVector Location, bool& CanMove);
    
    UFUNCTION(BlueprintCallable)
    bool CanModifyChunkAt(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void CanBuildAtLocation(FVector Location, bool NoSolidIsFine, bool& CanBuild);
    
    UFUNCTION(BlueprintCallable)
    void BlockHealthyAgain(FBlockInfoBP BlockInfo);
    
    UFUNCTION(BlueprintCallable)
    void AreaDamageAtLocation(const FVector Location, const float Damage, EBlockTypeBP ToolType, TArray<FModifiedBlockActorToSpawn>& ModifiedBlockActorsToSpawn);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldOrigin(FIntVector Location);
    
    UFUNCTION(BlueprintCallable)
    AMeshObject* AddMeshObjectAtLocation(EBlockTypeBP Type, UClass* Class, FTransform WorldTransform, bool& success);
    
    UFUNCTION(BlueprintCallable)
    void AddBlockAtLocation(EBlockTypeBP Type, int32 UniqueId, FVector Location, ERotation Rotation, float DuplicationAmount, bool& success, EBlockTypeBP& PlacedOn);
    
    UFUNCTION(BlueprintCallable)
    void ActivateRespawnTorch(FVector WorldLocation);
    
    UFUNCTION(BlueprintPure)
    FVector AbsoluteWorldToRealWorld(FIntVector AbsoluteWorld);
    
};

