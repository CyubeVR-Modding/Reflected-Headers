#pragma once
#include "CoreMinimal.h"
#include "LivIdentifier.generated.h"

USTRUCT(BlueprintType)
struct LIV_API FLivIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString EngineName;
    
    UPROPERTY(BlueprintReadWrite)
    FString EngineVersion;
    
    UPROPERTY(BlueprintReadWrite)
    FString ClientVersion;
    
    UPROPERTY(BlueprintReadWrite)
    FString NativeClientVersion;
    
    FLivIdentifier();
};

