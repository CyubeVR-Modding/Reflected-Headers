#pragma once
#include "CoreMinimal.h"
#include "LivCaptureContext.generated.h"

class UPrimitiveComponent;
class AActor;

USTRUCT(BlueprintType)
struct FLivCaptureContext {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> HiddenActors;
    
    LIV_API FLivCaptureContext();
};

