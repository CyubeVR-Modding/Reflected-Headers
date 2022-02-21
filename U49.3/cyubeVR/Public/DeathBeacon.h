#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DeathBeacon.generated.h"

UCLASS()
class CYUBEVR_API ADeathBeacon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RemainingLife;
    
    ADeathBeacon();
};

