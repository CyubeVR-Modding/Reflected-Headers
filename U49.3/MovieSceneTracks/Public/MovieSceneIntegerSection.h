#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneIntegerSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneIntegerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneIntegerChannel IntegerCurve;
    
public:
    UMovieSceneIntegerSection();
};

