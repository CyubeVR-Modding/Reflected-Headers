#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MovieSceneSequenceTransform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneSequenceID.h"
#include "MovieSceneFrameRange.h"
#include "MovieSceneSequenceInstanceDataPtr.h"
#include "MovieSceneSubSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSubSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Sequence;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceTransform RootToSequenceTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFrameRate TickResolution;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceID DeterministicSequenceID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange PlayRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange FullPlayRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange UnwarpedPlayRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange PreRollRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange PostRollRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int16 HierarchicalBias;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bHasHierarchicalEasing;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceInstanceDataPtr InstanceData;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid SubSectionSignature;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceTransform OuterToInnerTransform;
    
public:
    MOVIESCENE_API FMovieSceneSubSequenceData();
};

