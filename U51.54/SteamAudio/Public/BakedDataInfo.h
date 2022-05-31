#pragma once
#include "CoreMinimal.h"
#include "BakedDataInfo.generated.h"

USTRUCT(BlueprintType)
struct FBakedDataInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Size;
    
    STEAMAUDIO_API FBakedDataInfo();
};

