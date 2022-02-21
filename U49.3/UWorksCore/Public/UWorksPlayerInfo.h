#pragma once
#include "CoreMinimal.h"
#include "UWorksPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite)
    int32 score;
    
    UPROPERTY(BlueprintReadWrite)
    float TimePlayed;
    
    FUWorksPlayerInfo();
};

