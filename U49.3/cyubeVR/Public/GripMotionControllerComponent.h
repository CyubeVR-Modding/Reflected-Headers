#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VRGripControllerOnGripOutOfRangeDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=MotionControllerComponent -FallbackName=MotionControllerComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "VROnControllerGripSignatureDelegate.h"
#include "EBPVRResultSwitch.h"
#include "EVRVelocityType.h"
#include "VRGripControllerOnProfileTransformChangedDelegate.h"
#include "VRGripControllerOnTrackingEventSignatureDelegate.h"
#include "VROnControllerDropSignatureDelegate.h"
#include "BPActorGripInformation.h"
#include "BPVRComponentPosRep.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Transform_NetQuantize.h"
#include "BPAdvancedPhysicsHandleSettings.h"
#include "EGripLateUpdateSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=XRDeviceId -FallbackName=XRDeviceId
#include "EGripCollisionType.h"
#include "BPSecondaryGripInfo.h"
#include "EGripMovementReplicationSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "GripMotionControllerComponent.generated.h"

class UVRGripScriptBase;
class APawn;
class USceneComponent;
class UPrimitiveComponent;
class UObject;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGripMotionControllerComponent : public UMotionControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UVRGripScriptBase> DefaultGripScriptClass;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, VisibleAnywhere)
    UVRGripScriptBase* DefaultGripScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOffsetByHMD;
    
    UPROPERTY()
    TWeakObjectPtr<APawn> AttachChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVRVelocityType VelocityCalculationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSampleVelocityInWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VelocitySamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOffsetByControllerProfile;
    
    UPROPERTY(BlueprintAssignable)
    FVRGripControllerOnProfileTransformChanged OnControllerProfileTransformChanged;
    
    UPROPERTY(BlueprintAssignable)
    FVRGripControllerOnGripOutOfRange OnGripOutOfRange;
    
    UPROPERTY(BlueprintAssignable)
    FVRGripControllerOnTrackingEventSignature OnTrackingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FVROnControllerGripSignature OnGrippedObject;
    
    UPROPERTY(BlueprintAssignable)
    FVROnControllerDropSignature OnDroppedObject;
    
    UPROPERTY(BlueprintAssignable)
    FVROnControllerGripSignature OnSecondaryGripAdded;
    
    UPROPERTY(BlueprintAssignable)
    FVROnControllerGripSignature OnSecondaryGripRemoved;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TWeakObjectPtr<USceneComponent> CustomPivotComponent;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_GrippedObjects)
    TArray<FBPActorGripInformation> GrippedObjects;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_LocallyGrippedObjects)
    TArray<FBPActorGripInformation> LocallyGrippedObjects;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_LocalTransaction)
    TArray<FBPActorGripInformation> LocalTransactionBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysSendTickGrip;
    
    UPROPERTY(BlueprintReadWrite, Export)
    TArray<UPrimitiveComponent*> AdditionalLateUpdateComponents;
    
    UPROPERTY(EditDefaultsOnly, ReplicatedUsing=OnRep_ReplicatedControllerTransform)
    FBPVRComponentPosRep ReplicatedControllerTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float ControllerNetUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bSmoothReplicatedMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bReplicateWithoutTracking;
    
    UPROPERTY()
    TArray<UObject*> ObjectsWaitingForSocketUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseWithoutTracking;
    
    UGripMotionControllerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePhysicsHandleTransform_BP(const FBPActorGripInformation& GrippedActor, const FTransform& NewTransform);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePhysicsHandle_BP(const FBPActorGripInformation& Grip, bool bFullyRecreate);
    
    UFUNCTION(BlueprintCallable)
    void TeleportMoveGrips(bool bTeleportPhysicsGrips, bool bIsForPostTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool TeleportMoveGrippedComponent(UPrimitiveComponent* ComponentToMove, bool bTeleportPhysicsGrips);
    
    UFUNCTION(BlueprintCallable)
    bool TeleportMoveGrippedActor(AActor* GrippedActorToMove, bool bTeleportPhysicsGrips);
    
    UFUNCTION(BlueprintCallable)
    bool TeleportMoveGrip(UPARAM(Ref) FBPActorGripInformation& Grip, bool bTeleportPhysicsGrips, bool bIsForPostTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool SetUpPhysicsHandle_BP(const FBPActorGripInformation& Grip);
    
    UFUNCTION()
    void SetSocketTransform(UObject* ObjectToSocket, const FTransform_NetQuantize RelativeTransformToParent);
    
    UFUNCTION(BlueprintCallable)
    bool SetPhysicsHandleSettings(const FBPActorGripInformation& Grip, const FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsIn);
    
    UFUNCTION(BlueprintCallable)
    void SetPausedTransform(const FBPActorGripInformation& Grip, const FTransform& PausedTransform, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void SetGripStiffnessAndDamping(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, float NewStiffness, float NewDamping, bool bAlsoSetAngularValues, float OptionalAngularStiffness, float OptionalAngularDamping);
    
    UFUNCTION(BlueprintCallable)
    void SetGripRelativeTransform(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, const FTransform& NewRelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetGripPaused(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, bool bIsPaused, bool bNoConstraintWhenPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetGripLateUpdateSetting(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, EGripLateUpdateSettings NewGripLateUpdateSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetGripHybridLock(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, bool bIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetGripCollisionType(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, EGripCollisionType NewGripCollisionType);
    
    UFUNCTION(BlueprintCallable)
    void SetGripAdditionTransform(const FBPActorGripInformation& Grip, EBPVRResultSwitch& Result, const FTransform& NewAdditionTransform, bool bMakeGripRelative);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPivotComponent(USceneComponent* NewCustomPivotComponent);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_SendControllerTransform(FBPVRComponentPosRep NewTransform);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifySecondaryAttachmentChanged_Retain(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo, const FTransform_NetQuantize& NewRelativeTransform);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifySecondaryAttachmentChanged(uint8 GripID, const FBPSecondaryGripInfo& SecondaryGripInfo);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifyLocalGripRemoved(uint8 GripID, const FTransform_NetQuantize& TransformAtDrop, FVector_NetQuantize100 AngularVelocity, FVector_NetQuantize100 LinearVelocity);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifyLocalGripAddedOrChanged(const FBPActorGripInformation& newGrip);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifyHandledTransaction(uint8 GripID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifyDropAndSocketGrip(uint8 GripID, USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSecondaryAttachmentPoint(UObject* GrippedObjectToRemoveAttachment, float LerpToTime);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSecondaryAttachmentFromGrip(const FBPActorGripInformation& GripToRemoveAttachment, float LerpToTime);
    
    UFUNCTION(BlueprintCallable)
    void PostTeleportMoveGrippedObjects();
    
    UFUNCTION()
    void OnRep_ReplicatedControllerTransform();
    
    UFUNCTION()
    void OnRep_LocalTransaction(TArray<FBPActorGripInformation> OriginalArrayState);
    
    UFUNCTION()
    void OnRep_LocallyGrippedObjects(TArray<FBPActorGripInformation> OriginalArrayState);
    
    UFUNCTION()
    void OnRep_GrippedObjects(TArray<FBPActorGripInformation> OriginalArrayState);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyDropAndSocket(const FBPActorGripInformation& NewDrop, USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
    
    UFUNCTION(NetMulticast, Reliable)
    void NotifyDrop(const FBPActorGripInformation& NewDrop, bool bSimulate);
    
protected:
    UFUNCTION()
    void NewControllerProfileLoaded();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasGrippedObjects();
    
    UFUNCTION(BlueprintCallable)
    bool GripObjectByInterface(UObject* ObjectToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalBoneToGripName, FName OptionalSnapToSocketName, bool bIsSlotGrip);
    
    UFUNCTION(BlueprintCallable)
    bool GripObject(UObject* ObjectToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
    
    UFUNCTION(BlueprintPure)
    bool GripControllerIsTracked() const;
    
    UFUNCTION(BlueprintCallable)
    bool GripComponent(UPrimitiveComponent* ComponentToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
    
    UFUNCTION(BlueprintCallable)
    bool GripActor(AActor* ActorToGrip, const FTransform& WorldOffset, bool bWorldOffsetIsRelative, FName OptionalSnapToSocketName, FName OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
    
    UFUNCTION(BlueprintPure)
    FTransform GetPivotTransform_BP();
    
    UFUNCTION(BlueprintPure)
    FVector GetPivotLocation_BP();
    
    UFUNCTION(BlueprintPure)
    void GetPhysicsVelocities(const FBPActorGripInformation& Grip, FVector& AngularVelocity, FVector& LinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    bool GetPhysicsHandleSettings(const FBPActorGripInformation& Grip, FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsOut);
    
    UFUNCTION(BlueprintCallable)
    bool GetPhysicsConstraintForce(const FBPActorGripInformation& Grip, FVector& AngularForce, FVector& LinearForce);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSecondaryAttachment(const USceneComponent* ComponentToCheck, FBPActorGripInformation& Grip);
    
    UFUNCTION(BlueprintPure)
    bool GetIsObjectHeld(const UObject* ObjectToCheck);
    
    UFUNCTION(BlueprintPure)
    bool GetIsHeld(const AActor* ActorToCheck);
    
    UFUNCTION(BlueprintPure)
    bool GetIsComponentHeld(const UPrimitiveComponent* ComponentToCheck);
    
    UFUNCTION(BlueprintPure)
    void GetHandType(EControllerHand& NewHand);
    
    UFUNCTION(BlueprintCallable)
    void GetGrippedObjects(TArray<UObject*>& GrippedObjectsArray);
    
    UFUNCTION(BlueprintCallable)
    void GetGrippedComponents(TArray<UPrimitiveComponent*>& GrippedComponentsArray);
    
    UFUNCTION(BlueprintCallable)
    void GetGrippedActors(TArray<AActor*>& GrippedActorArray);
    
    UFUNCTION(BlueprintPure)
    void GetGripMass(const FBPActorGripInformation& Grip, float& Mass);
    
    UFUNCTION(BlueprintCallable)
    bool GetGripDistance_BP(UPARAM(Ref) FBPActorGripInformation& Grip, FVector ExpectedLocation, float& CurrentDistance);
    
    UFUNCTION(BlueprintCallable)
    void GetGripByObject(FBPActorGripInformation& Grip, UObject* ObjectToLookForGrip, EBPVRResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetGripByID(FBPActorGripInformation& Grip, uint8 IDToLookForGrip, EBPVRResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetGripByComponent(FBPActorGripInformation& Grip, UPrimitiveComponent* ComponentToLookForGrip, EBPVRResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetGripByActor(FBPActorGripInformation& Grip, AActor* ActorToLookForGrip, EBPVRResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    void GetControllerDeviceID(FXRDeviceId& DeviceID, EBPVRResultSwitch& Result, bool bCheckOpenVROnly);
    
    UFUNCTION(BlueprintCallable)
    void GetAllGrips(TArray<FBPActorGripInformation>& GripArray);
    
    UFUNCTION(BlueprintCallable)
    bool DropObjectByInterface(UObject* ObjectToDrop, uint8 GripIDToDrop, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    bool DropObject(UObject* ObjectToDrop, uint8 GripIDToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    bool DropGrip(const FBPActorGripInformation& Grip, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    bool DropComponent(UPrimitiveComponent* ComponentToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    bool DropAndSocketObject(const FTransform_NetQuantize& RelativeTransformToParent, UObject* ObjectToDrop, uint8 GripIDToDrop, USceneComponent* SocketingParent, FName OptionalSocketName, bool bWeldBodies);
    
    UFUNCTION(BlueprintCallable)
    bool DropAndSocketGrip(const FBPActorGripInformation& GripToDrop, USceneComponent* SocketingParent, FName OptionalSocketName, const FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
    
    UFUNCTION(BlueprintCallable)
    bool DropActor(AActor* ActorToDrop, bool bSimulate, FVector OptionalAngularVelocity, FVector OptionalLinearVelocity);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyPhysicsHandle_BP(const FBPActorGripInformation& Grip);
    
    UFUNCTION(BlueprintPure)
    FTransform CreateGripRelativeAdditionTransform_BP(const FBPActorGripInformation& GripToSample, const FTransform& AdditionTransform, bool bGripRelative);
    
    UFUNCTION(BlueprintPure)
    static FTransform ConvertToGripRelativeTransform(const FTransform& GrippedActorTransform, const FTransform& InTransform);
    
    UFUNCTION(BlueprintPure)
    FTransform ConvertToControllerRelativeTransform(const FTransform& InTransform);
    
    UFUNCTION(Client, Reliable)
    void Client_NotifyInvalidLocalGrip(UObject* LocallyGrippedObject, uint8 GripID);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsLocallyControlled();
    
    UFUNCTION(BlueprintPure)
    bool BP_HasGripMovementAuthority(const FBPActorGripInformation& Grip);
    
    UFUNCTION(BlueprintPure)
    bool BP_HasGripAuthorityForObject(const UObject* ObjToCheck);
    
    UFUNCTION(BlueprintPure)
    bool BP_HasGripAuthority(const FBPActorGripInformation& Grip);
    
    UFUNCTION(BlueprintCallable)
    bool AddSecondaryAttachmentToGrip(const FBPActorGripInformation& GripToAddAttachment, USceneComponent* SecondaryPointComponent, const FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, FName SecondarySlotName);
    
    UFUNCTION(BlueprintCallable)
    bool AddSecondaryAttachmentPoint(UObject* GrippedObjectToAddAttachment, USceneComponent* SecondaryPointComponent, const FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, FName SecondarySlotName);
    
};

