#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCameraShakeSourceTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneCameraShakeSourceTriggerSectionTemplate.generated.h"

USTRUCT()
struct MOVIESCENETRACKS_API FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> TriggerTimes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues;
    
public:
    FMovieSceneCameraShakeSourceTriggerSectionTemplate();
};

