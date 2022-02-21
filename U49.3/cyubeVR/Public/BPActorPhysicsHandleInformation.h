#pragma once
#include "CoreMinimal.h"
#include "BPActorPhysicsHandleInformation.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBPActorPhysicsHandleInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UObject* HandledObject;
    
    CYUBEVR_API FBPActorPhysicsHandleInformation();
};

