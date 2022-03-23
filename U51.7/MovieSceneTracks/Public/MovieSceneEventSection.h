#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NameCurve -FallbackName=NameCurve
#include "MovieSceneEventSectionData.h"
#include "MovieSceneEventSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNameCurve Events;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEventSectionData EventData;
    
public:
    UMovieSceneEventSection();
};

