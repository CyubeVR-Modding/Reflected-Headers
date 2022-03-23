#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "IpNetDriverUWorks.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUWORKS_API UIpNetDriverUWorks : public UIpNetDriver {
    GENERATED_BODY()
public:
    UIpNetDriverUWorks();
};

