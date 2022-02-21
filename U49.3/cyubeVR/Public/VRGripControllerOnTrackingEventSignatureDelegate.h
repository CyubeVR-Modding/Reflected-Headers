#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=ETrackingStatus -FallbackName=ETrackingStatus
#include "VRGripControllerOnTrackingEventSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVRGripControllerOnTrackingEventSignature, const ETrackingStatus&, NewTrackingStatus);

