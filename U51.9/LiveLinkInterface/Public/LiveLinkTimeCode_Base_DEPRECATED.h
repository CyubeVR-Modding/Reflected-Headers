#pragma once
#include "CoreMinimal.h"
#include "LiveLinkFrameRate.h"
#include "LiveLinkTimeCode_Base_DEPRECATED.generated.h"

USTRUCT()
struct FLiveLinkTimeCode_Base_DEPRECATED {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Seconds;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Frames;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLiveLinkFrameRate FrameRate;
    
    LIVELINKINTERFACE_API FLiveLinkTimeCode_Base_DEPRECATED();
};

