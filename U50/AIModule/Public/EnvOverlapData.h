#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EEnvOverlapShape.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "EnvOverlapData.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvOverlapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ExtentX;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ExtentY;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float ExtentZ;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FVector ShapeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvOverlapShape::Type> OverlapShape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bOnlyBlockingHits: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bOverlapComplex: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bSkipOverlapQuerier: 1;
    
    FEnvOverlapData();
};

