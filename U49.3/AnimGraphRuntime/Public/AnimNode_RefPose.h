#pragma once
#include "CoreMinimal.h"
#include "ERefPoseType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
#include "AnimNode_RefPose.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FAnimNode_RefPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ERefPoseType> RefPoseType;
    
    FAnimNode_RefPose();
};

