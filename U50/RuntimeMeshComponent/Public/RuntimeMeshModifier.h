#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshRenderableMeshData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RuntimeMeshCollisionData.h"
#include "RuntimeMeshModifier.generated.h"

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshModifier : public UObject {
    GENERATED_BODY()
public:
    URuntimeMeshModifier();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyToMesh(FRuntimeMeshRenderableMeshData& MeshData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyToCollisionMesh(FRuntimeMeshCollisionData& MeshData);
    
};

