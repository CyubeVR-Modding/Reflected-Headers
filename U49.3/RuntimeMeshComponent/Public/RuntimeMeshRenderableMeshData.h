#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshVertexPositionStream.h"
#include "RuntimeMeshVertexTangentStream.h"
#include "RuntimeMeshVertexColorStream.h"
#include "RuntimeMeshVertexTexCoordStream.h"
#include "RuntimeMeshTriangleStream.h"
#include "RuntimeMeshRenderableMeshData.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshRenderableMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRuntimeMeshVertexPositionStream Positions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRuntimeMeshVertexTangentStream Tangents;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRuntimeMeshVertexTexCoordStream TexCoords;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRuntimeMeshVertexColorStream Colors;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRuntimeMeshTriangleStream Triangles;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRuntimeMeshTriangleStream AdjacencyTriangles;
    
    FRuntimeMeshRenderableMeshData();
};

