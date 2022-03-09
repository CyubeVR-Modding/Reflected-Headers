#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBlendType.h"
#include "OptionalMovieSceneBlendType.generated.h"

USTRUCT(BlueprintType)
struct FOptionalMovieSceneBlendType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMovieSceneBlendType BlendType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
public:
    MOVIESCENE_API FOptionalMovieSceneBlendType();
};

