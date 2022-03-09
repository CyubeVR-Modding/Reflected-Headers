#pragma once
#include "CoreMinimal.h"
#include "ARSessionPayload.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FARSessionPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ConfigFlags;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultWireframeMeshMaterial;
    
    AUGMENTEDREALITY_API FARSessionPayload();
};

