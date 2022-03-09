#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ProceduralRavenCrowds.generated.h"

class URuntimeMeshComponent;
class URuntimeMeshProviderStatic;

UCLASS()
class CYUBEVR_API AProceduralRavenCrowds : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    URuntimeMeshComponent* RMC;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    URuntimeMeshProviderStatic* RuntimeMeshProvider;
    
    AProceduralRavenCrowds();
};

