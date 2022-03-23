#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpConnection -FallbackName=IpConnection
#include "IpConnectionUWorks.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUWORKS_API UIpConnectionUWorks : public UIpConnection {
    GENERATED_BODY()
public:
    UIpConnectionUWorks();
};

