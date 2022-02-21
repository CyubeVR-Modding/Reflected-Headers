#pragma once
#include "CoreMinimal.h"
#include "ChunkAboutBP.h"
#include "BlockInfoBP.generated.h"

USTRUCT(BlueprintType)
struct FBlockInfoBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FChunkAboutBP ChunkAbout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Z;
    
    CYUBEVR_API FBlockInfoBP();
};

