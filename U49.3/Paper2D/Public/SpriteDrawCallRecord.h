#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "SpriteDrawCallRecord.generated.h"

class UTexture;

USTRUCT()
struct PAPER2D_API FSpriteDrawCallRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Destination;
    
    UPROPERTY()
    UTexture* BaseTexture;
    
    UPROPERTY()
    FColor Color;
    
    FSpriteDrawCallRecord();
};

