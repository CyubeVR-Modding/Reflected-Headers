#pragma once
#include "CoreMinimal.h"
#include "GetFinalizedContributorsDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetFinalizedContributorsDelegate, bool, bSuccessful, const FString&, Content);

