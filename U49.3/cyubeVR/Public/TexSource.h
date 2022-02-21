#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureSourceFormat -FallbackName=ETextureSourceFormat
#include "TexSource.generated.h"

USTRUCT()
struct FTexSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FGuid ID;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeX;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeY;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumSlices;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumMips;
    
    UPROPERTY(VisibleAnywhere)
    bool bGuidIsHash;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ETextureSourceFormat> Format;
    
public:
    CYUBEVR_API FTexSource();
};

