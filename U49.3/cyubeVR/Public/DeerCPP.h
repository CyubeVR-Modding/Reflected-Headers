#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EComponentMobility -FallbackName=EComponentMobility
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "LightReceiveInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DeerCPP.generated.h"

class AChunkManager;
class UMeshComponent;
class AActor;

UCLASS()
class CYUBEVR_API ADeerCPP : public ACharacter, public ILightReceiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UMeshComponent*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool WasLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RecentlyRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool WasVisibleLastFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDead;
    
    ADeerCPP();
    UFUNCTION(BlueprintNativeEvent)
    void UpdateColorsFromLoaded();
    
    UFUNCTION(BlueprintNativeEvent)
    void StartMoving();
    
    UFUNCTION(BlueprintNativeEvent)
    void SetMobilityAllEvent(TEnumAsByte<EComponentMobility::Type> NewMobility);
    
    UFUNCTION(BlueprintCallable)
    void SetDeadRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void SetDead(AChunkManager* ChunkManager);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetComponentTickBP();
    
    UFUNCTION(BlueprintNativeEvent)
    void ResetToPoolBP();
    
    UFUNCTION()
    TArray<UMeshComponent*> GetMeshComponents();
    
    UFUNCTION(BlueprintNativeEvent)
    void DoWeirdStuff();
    
    UFUNCTION(BlueprintNativeEvent)
    void DoTick();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool UseLightAroundValue() override PURE_VIRTUAL(UseLightAroundValue, return false;);
    
    UFUNCTION()
    bool UseActorCustomLocation() override PURE_VIRTUAL(UseActorCustomLocation, return false;);
    
    UFUNCTION()
    bool TickReceiveLight() override PURE_VIRTUAL(TickReceiveLight, return false;);
    
    UFUNCTION()
    void LightInterfaceBeginPlay(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginPlay,);
    
    UFUNCTION()
    void LightInterfaceBeginDestroy(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginDestroy,);
    
    UFUNCTION()
    FVector GetActorCustomLocation() override PURE_VIRTUAL(GetActorCustomLocation, return FVector{};);
    
};

