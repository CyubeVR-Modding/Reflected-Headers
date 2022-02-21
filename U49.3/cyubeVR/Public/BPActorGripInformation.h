#pragma once
#include "CoreMinimal.h"
#include "EGripCollisionType.h"
#include "EGripTargetType.h"
#include "EGripMovementReplicationSettings.h"
#include "EGripLateUpdateSettings.h"
#include "Transform_NetQuantize.h"
#include "BPAdvGripSettings.h"
#include "BPSecondaryGripInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BPActorGripInformation.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBPActorGripInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 GripID;
    
    UPROPERTY(BlueprintReadOnly)
    EGripTargetType GripTargetType;
    
    UPROPERTY(BlueprintReadOnly)
    UObject* GrippedObject;
    
    UPROPERTY(BlueprintReadOnly)
    EGripCollisionType GripCollisionType;
    
    UPROPERTY(BlueprintReadWrite)
    EGripLateUpdateSettings GripLateUpdateSetting;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated)
    bool bColliding;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform_NetQuantize RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsSlotGrip;
    
    UPROPERTY(BlueprintReadWrite)
    FName GrippedBoneName;
    
    UPROPERTY(BlueprintReadWrite)
    FName SlotName;
    
    UPROPERTY(BlueprintReadOnly)
    EGripMovementReplicationSettings GripMovementReplicationSetting;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated)
    bool bIsPaused;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated)
    bool bLockHybridGrip;
    
    UPROPERTY()
    bool bOriginalReplicatesMovement;
    
    UPROPERTY()
    bool bOriginalGravity;
    
    UPROPERTY(BlueprintReadOnly)
    float Damping;
    
    UPROPERTY(BlueprintReadOnly)
    float Stiffness;
    
    UPROPERTY(BlueprintReadOnly)
    FBPAdvGripSettings AdvancedGripSettings;
    
    UPROPERTY(BlueprintReadOnly)
    FBPSecondaryGripInfo SecondaryGripInfo;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated)
    FTransform AdditionTransform;
    
    UPROPERTY(BlueprintReadOnly, NotReplicated)
    float GripDistance;
    
    CYUBEVR_API FBPActorGripInformation();
};

