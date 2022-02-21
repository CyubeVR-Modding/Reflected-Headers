#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "PingMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPingMinimalDelegate, bool, bSuccessful, FUWorksServerInfo, Server);

