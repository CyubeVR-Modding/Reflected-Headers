#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHostObject -FallbackName=OnlineBeaconHostObject
#include "QosBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class QOS_API AQosBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    AQosBeaconHost();
};

