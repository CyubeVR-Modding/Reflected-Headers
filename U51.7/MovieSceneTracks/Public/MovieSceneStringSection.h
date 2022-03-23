#pragma once
#include "CoreMinimal.h"
#include "MovieSceneStringChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneStringSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneStringSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel StringCurve;
    
public:
    UMovieSceneStringSection();
};

