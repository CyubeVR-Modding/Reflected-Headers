#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "Vector2DParameterNameAndCurves.h"
#include "BoolParameterNameAndCurve.h"
#include "ScalarParameterNameAndCurve.h"
#include "VectorParameterNameAndCurves.h"
#include "ColorParameterNameAndCurves.h"
#include "TransformParameterNameAndCurves.h"
#include "MovieSceneParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FScalarParameterNameAndCurve> Scalars;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FBoolParameterNameAndCurve> Bools;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector2DParameterNameAndCurves> Vector2Ds;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVectorParameterNameAndCurves> Vectors;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FColorParameterNameAndCurves> Colors;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTransformParameterNameAndCurves> Transforms;
    
public:
    MOVIESCENETRACKS_API FMovieSceneParameterSectionTemplate();
};
