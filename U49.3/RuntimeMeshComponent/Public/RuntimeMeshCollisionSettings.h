#pragma once
#include "CoreMinimal.h"
#include "ERuntimeMeshCollisionCookingMode.h"
#include "RuntimeMeshCollisionConvexMesh.h"
#include "RuntimeMeshCollisionSphere.h"
#include "RuntimeMeshCollisionCapsule.h"
#include "RuntimeMeshCollisionBox.h"
#include "RuntimeMeshCollisionSettings.generated.h"

USTRUCT(BlueprintType)
struct RUNTIMEMESHCOMPONENT_API FRuntimeMeshCollisionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseComplexAsSimple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAsyncCooking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERuntimeMeshCollisionCookingMode CookingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRuntimeMeshCollisionConvexMesh> ConvexElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRuntimeMeshCollisionSphere> Spheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRuntimeMeshCollisionBox> Boxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRuntimeMeshCollisionCapsule> Capsules;
    
    FRuntimeMeshCollisionSettings();
};

