#pragma once
#include "CoreMinimal.h"
#include "SteamKeyValuePair.generated.h"

USTRUCT(BlueprintType)
struct FSteamKeyValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString Value;
    
    STEAMGENERAL_API FSteamKeyValuePair();
};

