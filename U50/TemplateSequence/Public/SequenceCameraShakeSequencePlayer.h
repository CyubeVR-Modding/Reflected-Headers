#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneRootEvaluationTemplateInstance -FallbackName=MovieSceneRootEvaluationTemplateInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SequenceCameraShakeSequencePlayer.generated.h"

class UMovieSceneSequence;

UCLASS()
class USequenceCameraShakeSequencePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* BoundObjectOverride;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    
public:
    USequenceCameraShakeSequencePlayer();
};

