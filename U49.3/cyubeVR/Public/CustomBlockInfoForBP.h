#pragma once
#include "CoreMinimal.h"
#include "CustomBlockInfoForBP.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCustomBlockInfoForBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* RecipePreviewTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CreatorName;
    
    CYUBEVR_API FCustomBlockInfoForBP();
};

