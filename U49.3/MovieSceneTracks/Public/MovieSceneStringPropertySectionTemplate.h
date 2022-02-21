#pragma once
#include "CoreMinimal.h"
#include "MovieSceneStringChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
#include "MovieSceneStringPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneStringChannel StringCurve;
    
public:
    MOVIESCENETRACKS_API FMovieSceneStringPropertySectionTemplate();
};

