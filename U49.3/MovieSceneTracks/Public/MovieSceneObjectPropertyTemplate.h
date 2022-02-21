#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectPathChannel -FallbackName=MovieSceneObjectPathChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
#include "MovieSceneObjectPropertyTemplate.generated.h"

USTRUCT()
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneObjectPathChannel ObjectChannel;
    
public:
    MOVIESCENETRACKS_API FMovieSceneObjectPropertyTemplate();
};
