#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneObjectBindingSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneObjectBindingID.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneObjectBindingID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SequenceID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMovieSceneObjectBindingSpace Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
public:
    MOVIESCENE_API FMovieSceneObjectBindingID();
};

