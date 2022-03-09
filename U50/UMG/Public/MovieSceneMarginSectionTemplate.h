#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneBlendType -FallbackName=EMovieSceneBlendType
#include "MovieSceneMarginSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel TopCurve;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel LeftCurve;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel RightCurve;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BottomCurve;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMovieSceneBlendType BlendType;
    
public:
    UMG_API FMovieSceneMarginSectionTemplate();
};

