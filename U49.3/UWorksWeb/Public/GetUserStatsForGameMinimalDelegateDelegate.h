#pragma once
#include "CoreMinimal.h"
#include "GetUserStatsForGameMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetUserStatsForGameMinimalDelegate, bool, bSuccessful, const FString&, Content);

