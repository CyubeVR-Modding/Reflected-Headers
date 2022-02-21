#pragma once
#include "CoreMinimal.h"
#include "RankedByPublicationOrderMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FRankedByPublicationOrderMinimalDelegate, bool, bSuccessful, const FString&, Content);

