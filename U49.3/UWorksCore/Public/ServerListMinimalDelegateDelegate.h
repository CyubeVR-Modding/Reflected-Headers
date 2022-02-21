#pragma once
#include "CoreMinimal.h"
#include "UWorksServerInfo.h"
#include "ServerListMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FServerListMinimalDelegate, const TArray<FUWorksServerInfo>&, Servers);

