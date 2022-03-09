#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothSharedConfigCommon -FallbackName=ClothSharedConfigCommon
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosClothSharedSimConfig.generated.h"

UCLASS()
class CHAOSCLOTH_API UChaosClothSharedSimConfig : public UClothSharedConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IterationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubdivisionCount;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SelfCollisionThickness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CollisionThickness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseDampingOverride;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseGravityOverride;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Gravity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseLocalSpaceSimulation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseXPBDConstraints;
    
    UChaosClothSharedSimConfig();
};

