#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshCollisionTriangleStream.h"
#include "RuntimeMeshCollisionVertexStream.h"
#include "RuntimeMeshCollisionTexCoordStream.h"
#include "RuntimeMeshRenderableCollisionData.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshRenderableCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeMeshCollisionVertexStream Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeMeshCollisionTriangleStream Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeMeshCollisionTexCoordStream TexCoords;
    
    FRuntimeMeshRenderableCollisionData();
};

