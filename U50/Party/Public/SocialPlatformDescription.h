#pragma once
#include "CoreMinimal.h"
#include "SocialPlatformDescription.generated.h"

USTRUCT(BlueprintType)
struct FSocialPlatformDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SocialPlatformTypeName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SocialPlatformName;
    
    PARTY_API FSocialPlatformDescription();
};

