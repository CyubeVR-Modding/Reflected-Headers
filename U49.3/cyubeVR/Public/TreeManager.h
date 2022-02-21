#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TreeManager.generated.h"

class UStaticMesh;

UCLASS()
class CYUBEVR_API ATreeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UStaticMesh*> TreeMeshes;
    
    ATreeManager();
};

