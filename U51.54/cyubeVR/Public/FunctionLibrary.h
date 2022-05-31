#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FunctionLibrary.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API UFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static FVector RandVectorRange(float Size);
    
};

