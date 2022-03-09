#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothingSimulationInteractor.generated.h"

UCLASS(Abstract, BlueprintType)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingSimulationInteractor : public UObject {
    GENERATED_BODY()
public:
    UClothingSimulationInteractor();
    UFUNCTION(BlueprintCallable)
    void SetAnimDriveSpringStiffness(float InStiffness);
    
    UFUNCTION(BlueprintCallable)
    void PhysicsAssetUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSimulationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSubsteps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKinematicParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumIterations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumDynamicParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCloths() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableGravityOverride(const FVector& InVector);
    
    UFUNCTION(BlueprintCallable)
    void DisableGravityOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClothConfigUpdated();
    
};

