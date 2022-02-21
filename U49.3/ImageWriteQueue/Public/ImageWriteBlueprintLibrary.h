#pragma once
#include "CoreMinimal.h"
#include "ImageWriteOptions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ImageWriteBlueprintLibrary.generated.h"

class UTexture;

UCLASS(BlueprintType)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UImageWriteBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void ExportToDisk(UTexture* Texture, const FString& Filename, const FImageWriteOptions& Options);
    
};

