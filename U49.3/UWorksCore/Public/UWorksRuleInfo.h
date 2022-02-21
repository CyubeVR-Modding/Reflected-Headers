#pragma once
#include "CoreMinimal.h"
#include "UWorksRuleInfo.generated.h"

USTRUCT(BlueprintType)
struct UWORKSCORE_API FUWorksRuleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite)
    FString Value;
    
    FUWorksRuleInfo();
};

