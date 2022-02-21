#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshCollisionUpdatedDelegateDelegate.h"
#include "RuntimeMeshProviderTargetInterface.h"
#include "RuntimeMeshAsyncBodySetupData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_CollisionDataProvider -FallbackName=Interface_CollisionDataProvider
#include "RuntimeMeshMaterialSlot.h"
#include "RuntimeMeshCollisionSourceSectionInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
#include "RuntimeMeshCollisionHitInfo.h"
#include "RuntimeMesh.generated.h"

class URuntimeMeshProvider;
class UBodySetup;

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMesh : public URuntimeMeshProviderTargetInterface, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    URuntimeMeshProvider* MeshProviderPtr;
    
    UPROPERTY(Transient)
    UBodySetup* BodySetup;
    
    UPROPERTY()
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSource;
    
    UPROPERTY(Transient)
    TArray<FRuntimeMeshAsyncBodySetupData> AsyncBodySetupQueue;
    
    UPROPERTY()
    TArray<FRuntimeMeshMaterialSlot> MaterialSlots;
    
    UPROPERTY()
    TMap<FName, int32> SlotNameLookup;
    
public:
    UPROPERTY(BlueprintAssignable)
    FRuntimeMeshCollisionUpdatedDelegate CollisionUpdated;
    
    URuntimeMesh();
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(URuntimeMeshProvider* Provider);
    
    UFUNCTION(BlueprintCallable)
    URuntimeMeshProvider* GetProviderPtr();
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds GetLocalBounds() const;
    
    UFUNCTION(BlueprintPure)
    FRuntimeMeshCollisionHitInfo GetHitSource(int32 FaceIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UBodySetup* GetBodySetup();
    
    
    // Fix for true pure virtual functions not being implemented
};

