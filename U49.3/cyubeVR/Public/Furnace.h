#pragma once
#include "CoreMinimal.h"
#include "MeshObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Furnace.generated.h"

UCLASS()
class CYUBEVR_API AFurnace : public AMeshObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Initialized;
    
    AFurnace();
    UFUNCTION()
    bool UseActorCustomLocation();
    
    UFUNCTION(BlueprintNativeEvent)
    void SetFurnaceSaveVariables(float HeatOnTop, float MoltenFillValue, float MeltAmountSum, int32 ItemFullyFinishedMelt, bool FlowOutStarted, FRotator RotationShutterTop, FRotator RotationShutterBottom, FRotator RotationLever);
    
    UFUNCTION(BlueprintNativeEvent)
    void GetFurnaceSaveVariables(float& HeatOnTop, float& MoltenFillValue, float& MeltAmountSum, int32& ItemFullyFinishedMelt, bool& FlowOutStarted, FRotator& RotationShutterTop, FRotator& RotationShutterBottom, FRotator& RotationLever);
    
    UFUNCTION()
    FVector GetActorCustomLocation();
    
    UFUNCTION(BlueprintNativeEvent)
    void CanDamageObjectBP(bool& CanDamage);
    
};

