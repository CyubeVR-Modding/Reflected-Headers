#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAdditiveCameraAnimationTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneCameraShakeSectionData.h"
#include "MovieSceneCameraShakeSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneCameraShakeSectionData SourceData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFrameNumber SectionStartTime;
    
public:
    MOVIESCENETRACKS_API FMovieSceneCameraShakeSectionTemplate();
};

