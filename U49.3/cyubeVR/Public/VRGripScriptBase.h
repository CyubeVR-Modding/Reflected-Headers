#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EGSTransformOverrideType.h"
#include "BPActorGripInformation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBPVRResultSwitch.h"
#include "VRGripScriptBase.generated.h"

class UGripMotionControllerComponent;
class AActor;
class USceneComponent;
class UPrimitiveComponent;
class UVRGripScriptBase;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class UVRGripScriptBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EGSTransformOverrideType WorldTransformOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDenyAutoDrop;
    
    UPROPERTY(BlueprintReadWrite)
    bool bForceDrop;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDenyLateUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bInjectPrePhysicsHandle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bInjectPostPhysicsHandle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanEverTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowTicking;
    
    UVRGripScriptBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Wants_DenyTeleport(UGripMotionControllerComponent* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool bTickEnabled);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSecondaryGripRelease(UGripMotionControllerComponent* Controller, USceneComponent* ReleasingSecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSecondaryGrip(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGripRelease(UGripMotionControllerComponent* ReleasingController, const FBPActorGripInformation& GripInformation, bool bWasSocketed);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGrip(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginPlay(UObject* CallingOwner);
    
    UFUNCTION(BlueprintPure)
    bool IsServer();
    
    UFUNCTION(BlueprintPure)
    bool HasAuthority();
    
    UFUNCTION(BlueprintNativeEvent)
    bool GetWorldTransform(UGripMotionControllerComponent* GrippingController, float DeltaTime, UPARAM(Ref) FTransform& WorldTransform, const FTransform& ParentTransform, UPARAM(Ref) FBPActorGripInformation& Grip, AActor* Actor, UPrimitiveComponent* Root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport);
    
    UFUNCTION(BlueprintPure)
    FTransform GetParentTransform(bool bGetWorldTransform, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetParentSceneComp();
    
    UFUNCTION(BlueprintPure)
    UObject* GetParent();
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner();
    
    UFUNCTION(BlueprintPure)
    FTransform GetGripTransform(const FBPActorGripInformation& Grip, const FTransform& ParentTransform);
    
    UFUNCTION(BlueprintCallable)
    static UVRGripScriptBase* GetGripScriptByClass(UObject* WorldContextObject, TSubclassOf<UVRGripScriptBase> GripScriptClass, EBPVRResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    void ForceGripToDrop();
    
};

