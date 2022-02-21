#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "ServerListUpdateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FServerListUpdateDelegate, bool, bSuccessful, FUWorksServerInfo, Server);

