#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "PictureFrameProperties.generated.h"

USTRUCT(BlueprintType)
struct FPictureFrameProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrameThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrameDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    CYUBEVR_API FPictureFrameProperties();
};

