#pragma once
#include "CoreMinimal.h"
#include "ClothCollisionPrim_ConvexFace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothCollisionPrim_Convex.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_Convex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FClothCollisionPrim_ConvexFace> Faces;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector> SurfacePoints;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
    FClothCollisionPrim_Convex();
};

