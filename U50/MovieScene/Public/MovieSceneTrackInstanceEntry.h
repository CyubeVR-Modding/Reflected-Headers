#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackInstanceEntry.generated.h"

class UObject;
class UMovieSceneTrackInstance;

USTRUCT()
struct FMovieSceneTrackInstanceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* BoundObject;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMovieSceneTrackInstance* TrackInstance;
    
    MOVIESCENE_API FMovieSceneTrackInstanceEntry();
};

