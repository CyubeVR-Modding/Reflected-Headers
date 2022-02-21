#pragma once
#include "CoreMinimal.h"
#include "BakedDataInfo.generated.h"

USTRUCT(BlueprintType)
struct FBakedDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 Size;
    
    STEAMAUDIO_API FBakedDataInfo();
};

