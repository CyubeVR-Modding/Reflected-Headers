#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshCollisionFaceSourceType.h"
#include "RuntimeMeshCollisionHitInfo.generated.h"

class URuntimeMeshProvider;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshCollisionHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<URuntimeMeshProvider> SourceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERuntimeMeshCollisionFaceSourceType SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* Material;
    
    FRuntimeMeshCollisionHitInfo();
};

