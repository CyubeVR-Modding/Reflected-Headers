#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneEvaluationOperand.generated.h"

USTRUCT()
struct FMovieSceneEvaluationOperand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid ObjectBindingId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceID SequenceID;
    
    MOVIESCENE_API FMovieSceneEvaluationOperand();
};

