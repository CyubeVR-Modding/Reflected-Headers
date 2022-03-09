#pragma once
#include "CoreMinimal.h"
#include "EBlockTypeBP.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "ERotation.h"
#include "Torch.generated.h"

class UParticleSystemComponent;

UCLASS()
class CYUBEVR_API ATorch : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_LOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_2_LOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_LOD1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERotation Rotation;
    
    ATorch();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetColor(FColor Color_, EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive(bool Active);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetachFromChunk();
    
};

