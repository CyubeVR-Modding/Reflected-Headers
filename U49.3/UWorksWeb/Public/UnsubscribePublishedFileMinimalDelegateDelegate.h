#pragma once
#include "CoreMinimal.h"
#include "UnsubscribePublishedFileMinimalDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FUnsubscribePublishedFileMinimalDelegate, bool, bSuccessful, const FString&, Content);

