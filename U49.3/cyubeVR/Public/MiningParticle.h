#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "MiningParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FMiningParticle : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Stick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Stone_Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Stone_Axe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Stone_Shovel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Copper_Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Copper_Axe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Copper_Shovel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Copper_Sledgehammer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Iron_Pickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Iron_Axe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Iron_Shovel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* Iron_Sledgehammer;
    
    CYUBEVR_API FMiningParticle();
};

