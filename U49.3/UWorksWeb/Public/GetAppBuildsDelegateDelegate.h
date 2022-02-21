#pragma once
#include "CoreMinimal.h"
#include "GetAppBuildsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetAppBuildsDelegate, bool, bSuccessful, const FString&, Content);

