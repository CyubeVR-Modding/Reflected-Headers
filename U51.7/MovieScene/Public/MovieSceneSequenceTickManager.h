#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneSequenceActorPointers.h"
#include "MovieSceneSequenceTickManager.generated.h"

class UMovieSceneEntitySystemLinker;

UCLASS()
class MOVIESCENE_API UMovieSceneSequenceTickManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneSequenceActorPointers> SequenceActors;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* Linker;
    
public:
    UMovieSceneSequenceTickManager();
};

