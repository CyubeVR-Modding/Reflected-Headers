#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCameraShakeSectionData.h"
#include "MovieSceneAdditiveCameraAnimationTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneCameraShakeSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneCameraShakeSectionData SourceData;
    
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
public:
    MOVIESCENETRACKS_API FMovieSceneCameraShakeSectionTemplate();
};

