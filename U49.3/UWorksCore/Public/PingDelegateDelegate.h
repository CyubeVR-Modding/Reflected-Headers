#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "PingDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPingDelegate, bool, bSuccessful, FUWorksServerInfo, Server);

