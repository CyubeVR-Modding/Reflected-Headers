#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "LightReceiveInterface.h"
#include "VRCharacter.generated.h"

class UCameraComponent;
class UMeshComponent;
class AActor;

UCLASS()
class CYUBEVR_API AVRCharacter : public APawn, public ILightReceiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UCameraComponent* CameraRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LocationLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UMeshComponent*> Meshes;
    
    AVRCharacter();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WasRotated();
    
    UFUNCTION()
    bool UseLightAroundValue();
    
    UFUNCTION()
    TArray<UMeshComponent*> GetMeshComponents();
    
    
    // Fix for true pure virtual functions not being implemented
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

