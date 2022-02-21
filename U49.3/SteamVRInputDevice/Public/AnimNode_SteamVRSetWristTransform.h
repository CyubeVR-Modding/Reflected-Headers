#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "EHandSkeleton.h"
#include "AnimNode_SteamVRSetWristTransform.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FAnimNode_SteamVRSetWristTransform : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink ReferencePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHandSkeleton HandSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink TargetPose;
    
    FAnimNode_SteamVRSetWristTransform();
};

