#pragma once
#include "CoreMinimal.h"
#include "CustomBlockData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCustomBlockData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTexture2D* TextureAll;
    
    UPROPERTY()
    UTexture2D* TextureSides;
    
    UPROPERTY()
    UTexture2D* TextureUpDown;
    
    UPROPERTY()
    UTexture2D* TextureUp;
    
    UPROPERTY()
    UTexture2D* TextureDown;
    
    UPROPERTY()
    UTexture2D* TextureLeft;
    
    UPROPERTY()
    UTexture2D* TextureRight;
    
    UPROPERTY()
    UTexture2D* TextureFront;
    
    UPROPERTY()
    UTexture2D* TextureBack;
    
    UPROPERTY()
    UTexture2D* Snow_TextureAll;
    
    UPROPERTY()
    UTexture2D* Snow_TextureSides;
    
    UPROPERTY()
    UTexture2D* Snow_TextureUpDown;
    
    UPROPERTY()
    UTexture2D* Snow_TextureUp;
    
    UPROPERTY()
    UTexture2D* Snow_TextureDown;
    
    UPROPERTY()
    UTexture2D* Snow_TextureLeft;
    
    UPROPERTY()
    UTexture2D* Snow_TextureRight;
    
    UPROPERTY()
    UTexture2D* Snow_TextureFront;
    
    UPROPERTY()
    UTexture2D* Snow_TextureBack;
    
    UPROPERTY()
    UTexture2D* Normal_TextureAll;
    
    UPROPERTY()
    UTexture2D* Normal_TextureSides;
    
    UPROPERTY()
    UTexture2D* Normal_TextureUpDown;
    
    UPROPERTY()
    UTexture2D* Normal_TextureUp;
    
    UPROPERTY()
    UTexture2D* Normal_TextureDown;
    
    UPROPERTY()
    UTexture2D* Normal_TextureLeft;
    
    UPROPERTY()
    UTexture2D* Normal_TextureRight;
    
    UPROPERTY()
    UTexture2D* Normal_TextureFront;
    
    UPROPERTY()
    UTexture2D* Normal_TextureBack;
    
    UPROPERTY()
    UTexture2D* Emissive_TextureAll;
    
    UPROPERTY()
    UTexture2D* Emissive_TextureSides;
    
    UPROPERTY()
    UTexture2D* Emissive_TextureUpDown;
    
    UPROPERTY()
    UTexture2D* Emissive_TextureUp;
    
    UPROPERTY()
    UTexture2D* Emissive_TextureDown;
    
    UPROPERTY()
    UTexture2D* Emissive_TextureLeft;
    
    UPROPERTY()
    UTexture2D* Emissive_TextureRight;
    
    UPROPERTY()
    UTexture2D* Emissive_TextureFront;
    
    UPROPERTY()
    UTexture2D* Emissive_TextureBack;
    
    UPROPERTY()
    UTexture2D* RecipePreviewTexture;
    
    CYUBEVR_API FCustomBlockData();
};

