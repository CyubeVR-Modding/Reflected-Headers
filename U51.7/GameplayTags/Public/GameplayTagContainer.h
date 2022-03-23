#pragma once
#include "CoreMinimal.h"
#include "GameplayTag.h"
#include "GameplayTagContainer.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTagContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ParentTags;
    
public:
    FGameplayTagContainer();
};

