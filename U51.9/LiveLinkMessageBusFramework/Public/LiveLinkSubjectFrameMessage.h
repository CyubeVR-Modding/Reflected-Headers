#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkCurveElement -FallbackName=LiveLinkCurveElement
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkMetaData -FallbackName=LiveLinkMetaData
#include "LiveLinkSubjectFrameMessage.generated.h"

USTRUCT()
struct FLiveLinkSubjectFrameMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName SubjectName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkCurveElement> Curves;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLiveLinkMetaData MetaData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    double Time;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkSubjectFrameMessage();
};

