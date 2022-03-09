#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneMarginSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneMarginSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel TopCurve;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel LeftCurve;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel RightCurve;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BottomCurve;
    
    UMovieSceneMarginSection();
};

