#pragma once
#include "CoreMinimal.h"
#include "ItemVoteSummaryDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemVoteSummaryDelegate, bool, bSuccessful, const FString&, Content);

