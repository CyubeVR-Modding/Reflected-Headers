#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneEvent.h"
#include "MovieSceneEventChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneEventChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvent> KeyValues;
    
public:
    FMovieSceneEventChannel();
};

