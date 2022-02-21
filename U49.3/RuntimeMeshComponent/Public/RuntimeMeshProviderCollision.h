#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshRenderableCollisionData.h"
#include "RuntimeMeshProviderPassthrough.h"
#include "RuntimeMeshCollisionSettings.h"
#include "RuntimeMeshCollisionData.h"
#include "RuntimeMeshProviderCollision.generated.h"

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderCollision : public URuntimeMeshProviderPassthrough {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 LODForMeshCollision;
    
    UPROPERTY()
    TMap<int32, FRuntimeMeshRenderableCollisionData> RenderableCollisionData;
    
    UPROPERTY()
    TSet<int32> SectionsAffectingCollision;
    
    UPROPERTY()
    FRuntimeMeshCollisionSettings CollisionSettings;
    
    UPROPERTY()
    FRuntimeMeshCollisionData CollisionMesh;
    
public:
    URuntimeMeshProviderCollision();
    UFUNCTION(BlueprintCallable)
    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderableLODForCollision(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
    
};

