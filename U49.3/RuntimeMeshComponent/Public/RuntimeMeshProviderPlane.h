#pragma once
#include "CoreMinimal.h"
#include "RuntimeMeshProviderPassthrough.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RuntimeMeshProviderPlane.generated.h"

class UMaterialInterface;

UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderPlane : public URuntimeMeshProviderPassthrough {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector LocationA;
    
    UPROPERTY(EditAnywhere)
    FVector LocationB;
    
    UPROPERTY(EditAnywhere)
    FVector LocationC;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> VertsAB;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> VertsAC;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ScreenSize;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
public:
    URuntimeMeshProviderPlane();
};

