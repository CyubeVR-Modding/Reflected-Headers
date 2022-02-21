#pragma once
#include "CoreMinimal.h"
#include "ComponentTrackingDeactivatedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FComponentTrackingDeactivatedSignature, int32, DeviceID, FName, DeviceClass, const FString&, DeviceModel);

