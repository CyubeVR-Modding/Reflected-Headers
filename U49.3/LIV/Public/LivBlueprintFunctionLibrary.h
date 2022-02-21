#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LivBlueprintFunctionLibrary.generated.h"

class UObject;
class UTextureRenderTarget2D;
class UTexture2D;

UCLASS(BlueprintType)
class LIV_API ULivBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULivBlueprintFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static float GetRenderTargetMaxPixelAlphaValue(UObject* WorldContext, UTextureRenderTarget2D* TextureRenderTarget);
    
    UFUNCTION(BlueprintPure)
    static float GetRenderTargetMaxDepthValue(UObject* WorldContext, UTextureRenderTarget2D* TextureRenderTarget);
    
    UFUNCTION(BlueprintPure)
    static float GetMaxPixelAlphaValue(const UObject* WorldContext, UTexture2D* Texture);
    
};

