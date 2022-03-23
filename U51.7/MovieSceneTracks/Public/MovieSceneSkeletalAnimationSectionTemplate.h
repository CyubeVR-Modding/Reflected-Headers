#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSkeletalAnimationSectionTemplateParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneSkeletalAnimationSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;
    
    MOVIESCENETRACKS_API FMovieSceneSkeletalAnimationSectionTemplate();
};

