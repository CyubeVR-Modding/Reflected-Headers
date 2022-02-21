#pragma once
#include "CoreMinimal.h"
#include "LoadedPicture.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLoadedPicture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Height;
    
    CYUBEVR_API FLoadedPicture();
};

