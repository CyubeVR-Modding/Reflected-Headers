#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneActorReferenceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=IntegralCurve -FallbackName=IntegralCurve
#include "MovieSceneActorReferenceSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneActorReferenceSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData ActorReferenceData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FIntegralCurve ActorGuidIndexCurve;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> ActorGuidStrings;
    
public:
    UMovieSceneActorReferenceSection();
};

