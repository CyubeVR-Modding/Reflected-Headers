#pragma once
#include "CoreMinimal.h"
#include "EGripInterfaceTeleportBehavior.h"
#include "EGripCollisionType.h"
#include "ESecondaryGripType.h"
#include "BPGripPair.h"
#include "EGripLateUpdateSettings.h"
#include "EGripMovementReplicationSettings.h"
#include "BPAdvGripSettings.h"
#include "BPInterfaceProperties.generated.h"

USTRUCT(BlueprintType)
struct FBPInterfaceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDenyGripping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowMultipleGrips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGripInterfaceTeleportBehavior OnTeleportBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSimulateOnDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGripCollisionType SlotDefaultGripType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGripCollisionType FreeDefaultGripType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESecondaryGripType SecondaryGripType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGripMovementReplicationSettings MovementReplicationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGripLateUpdateSettings LateUpdateSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConstraintStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConstraintDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConstraintBreakDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SecondarySlotRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PrimarySlotRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBPAdvGripSettings AdvancedGripSettings;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated)
    bool bIsHeld;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated)
    TArray<FBPGripPair> HoldingControllers;
    
    CYUBEVR_API FBPInterfaceProperties();
};

