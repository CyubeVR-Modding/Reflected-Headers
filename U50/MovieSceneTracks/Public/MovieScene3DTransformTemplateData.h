#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneBlendType -FallbackName=EMovieSceneBlendType
#include "MovieSceneTransformMask.h"
#include "MovieScene3DTransformTemplateData.generated.h"

USTRUCT()
struct FMovieScene3DTransformTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel TranslationCurve[3];
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel RotationCurve[3];
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ScaleCurve[3];
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ManualWeight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMovieSceneBlendType BlendType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneTransformMask Mask;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseQuaternionInterpolation;
    
    MOVIESCENETRACKS_API FMovieScene3DTransformTemplateData();
};

