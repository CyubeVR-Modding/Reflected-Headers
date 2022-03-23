#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "LiveLinkWorldTime.h"
#include "LiveLinkCurveElement.h"
#include "LiveLinkMetaData.h"
#include "LiveLinkFrameData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkCurveElement> CurveElements;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLiveLinkWorldTime WorldTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLiveLinkMetaData MetaData;
    
    LIVELINKINTERFACE_API FLiveLinkFrameData();
};

