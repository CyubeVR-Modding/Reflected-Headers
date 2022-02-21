#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "VRGripControllerOnProfileTransformChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVRGripControllerOnProfileTransformChanged, const FTransform&, NewRelTransForProcComps, const FTransform&, NewProfileTransform);

