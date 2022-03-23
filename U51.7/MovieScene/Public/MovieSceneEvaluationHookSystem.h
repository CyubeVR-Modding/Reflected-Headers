#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationInstanceKey.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneEvaluationHookEventContainer.h"
#include "MovieSceneEvaluationHookSystem.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;
    
public:
    UMovieSceneEvaluationHookSystem();
};

