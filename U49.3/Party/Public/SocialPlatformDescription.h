#pragma once
#include "CoreMinimal.h"
#include "SocialPlatformDescription.generated.h"

USTRUCT(BlueprintType)
struct FSocialPlatformDescription {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SocialPlatformTypeName;
    
    UPROPERTY()
    FString SocialPlatformName;
    
    PARTY_API FSocialPlatformDescription();
};

