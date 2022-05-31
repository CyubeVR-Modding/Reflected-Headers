#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RuntimeMeshProvider.h"
#include "RuntimeMeshProviderBox.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class RUNTIMEMESHCOMPONENT_API URuntimeMeshProviderBox : public URuntimeMeshProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
public:
    URuntimeMeshProviderBox();
    UFUNCTION(BlueprintCallable)
    void SetBoxRadius(const FVector& InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxMaterial(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBoxRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetBoxMaterial() const;
    
};

