#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshCollisionTriangleStream.h"
#include "RuntimeMeshCollisionVertexStream.h"
#include "RuntimeMeshCollisionTexCoordStream.h"
#include "RuntimeMeshCollisionMaterialIndexStream.h"
#include "RuntimeMeshCollisionSourceSectionInfo.h"
#include "RuntimeMeshCollisionData.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeMeshCollisionVertexStream Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeMeshCollisionTriangleStream Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeMeshCollisionTexCoordStream TexCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeMeshCollisionMaterialIndexStream MaterialIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFlipNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeformableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFastCook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableActiveEdgePrecompute;
    
    FRuntimeMeshCollisionData();
};

