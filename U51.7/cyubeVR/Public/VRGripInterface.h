#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "BPActorGripInformation.h"
#include "ESecondaryGripType.h"
#include "EGripInterfaceTeleportBehavior.h"
#include "Transform_NetQuantize.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputEvent -FallbackName=EInputEvent
#include "BPGripPair.h"
#include "EGripMovementReplicationSettings.h"
#include "EGripLateUpdateSettings.h"
#include "EGripCollisionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BPAdvGripSettings.h"
#include "VRGripInterface.generated.h"

class USceneComponent;
class UGripMotionControllerComponent;
class UVRGripScriptBase;

UINTERFACE(Blueprintable)
class UVRGripInterface : public UInterface {
    GENERATED_BODY()
};

class IVRGripInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickGrip(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGripInterfaceTeleportBehavior TeleportBehavior();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SimulateOnDrop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHeld(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESecondaryGripType SecondaryGripType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RequestsSocketing(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSecondaryUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSecondaryGripRelease(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSecondaryGrip(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInput(FKey Key, TEnumAsByte<EInputEvent> KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGripRelease(UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrip(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndSecondaryUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChildGrip(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsHeld(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGripMovementReplicationSettings GripMovementReplicationType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGripLateUpdateSettings GripLateUpdateSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GripBreakDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGripCollisionType GetPrimaryGripType(bool bIsSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetGripScripts(TArray<UVRGripScriptBase*>& ArrayReference);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DenyGripping();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowsMultipleGrips();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FBPAdvGripSettings AdvancedGripSettings();
    
};

