#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EBlockTypeBP.h"
#include "ERotation.h"
#include "Torch.generated.h"

class UParticleSystemComponent;

UCLASS()
class CYUBEVR_API ATorch : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UParticleSystemComponent* P_LOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UParticleSystemComponent* P_2_LOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UParticleSystemComponent* P_LOD1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERotation Rotation;
    
    ATorch();
    UFUNCTION(BlueprintNativeEvent)
    void SetColor(FColor Color_, EBlockTypeBP Type);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetActive(bool Active);
    
    UFUNCTION(BlueprintNativeEvent)
    void DetachFromChunk();
    
};

