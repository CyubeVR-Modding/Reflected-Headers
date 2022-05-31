#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MathBPLibrary.generated.h"

UCLASS(Blueprintable)
class CYUBEVR_API UMathBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathBPLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GridVector(FVector InVector, float GridSize, FVector& ReturnVector);
    
};

