#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LivTestActor.generated.h"

UCLASS(Blueprintable)
class LIV_API ALivTestActor : public AActor {
    GENERATED_BODY()
public:
    ALivTestActor();
};

