#pragma once
#include "CoreMinimal.h"
#include "ChunkAboutBP.generated.h"

USTRUCT(BlueprintType)
struct FChunkAboutBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChunkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LevelLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LocationX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LocationY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnTime;
    
    CYUBEVR_API FChunkAboutBP();
};

