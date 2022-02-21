#pragma once
#include "CoreMinimal.h"
#include "CustomBlockInfoForModsBP.generated.h"

USTRUCT(BlueprintType)
struct FCustomBlockInfoForModsBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CreatorName;
    
    CYUBEVR_API FCustomBlockInfoForModsBP();
};

