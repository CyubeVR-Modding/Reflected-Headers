#pragma once
#include "CoreMinimal.h"
#include "RankedByVoteMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FRankedByVoteMinimalDelegate, bool, bSuccessful, const FString&, Content);

