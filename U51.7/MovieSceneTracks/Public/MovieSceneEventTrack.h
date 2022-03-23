#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneDeterminismSource -FallbackName=MovieSceneDeterminismSource
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "EFireEventsAtPosition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneEventTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer, public IMovieSceneDeterminismSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireEventsAtPosition EventPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneEventTrack();
    
    // Fix for true pure virtual functions not being implemented
};
