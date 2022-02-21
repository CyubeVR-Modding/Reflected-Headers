#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ProceduralRavenCrowds.generated.h"

class URuntimeMeshProviderStatic;
class URuntimeMeshComponent;

UCLASS()
class CYUBEVR_API AProceduralRavenCrowds : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    URuntimeMeshComponent* RMC;
    
    UPROPERTY()
    URuntimeMeshProviderStatic* RuntimeMeshProvider;
    
    AProceduralRavenCrowds();
};

