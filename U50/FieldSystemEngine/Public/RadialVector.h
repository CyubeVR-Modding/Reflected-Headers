#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FieldNodeVector.h"
#include "RadialVector.generated.h"

class URadialVector;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API URadialVector : public UFieldNodeVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    URadialVector();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadialVector* SetRadialVector(float NewMagnitude, FVector NewPosition);
    
};

