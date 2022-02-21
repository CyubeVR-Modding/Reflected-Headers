#pragma once
#include "CoreMinimal.h"
#include "Transform_NetQuantize.h"
#include "BPVRControllerProfile.generated.h"

USTRUCT(BlueprintType)
struct FBPVRControllerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ControllerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform_NetQuantize SocketOffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSeperateHandOffsetTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform_NetQuantize SocketOffsetTransformRightHand;
    
    CYUBEVR_API FBPVRControllerProfile();
};

