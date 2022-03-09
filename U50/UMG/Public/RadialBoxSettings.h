#pragma once
#include "CoreMinimal.h"
#include "RadialBoxSettings.generated.h"

USTRUCT(BlueprintType)
struct FRadialBoxSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDistributeItemsEvenly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleBetweenItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingAngle;
    
    UMG_API FRadialBoxSettings();
};

